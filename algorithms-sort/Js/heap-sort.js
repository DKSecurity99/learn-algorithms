/*
    HeapSort - Este algoritmo é baseado na estrutura de dados HEAP,que nada mas é
do que um vetor (X) que pode ser visto como uma árvore binaria completa,onde cada nó possui
no máximo 2 filhos.Cada vértice da árvore corresonde a um elemento do vetor.A árvore é completamente
preenchida, exceto no ultimo nivél.Cada nivél é sempre preenchido da direita para esquerda.
Além disso,num Heap, para todo´vértice i diferente da raiz,a seguinte propriedade deve ser avaliada
X[Pai(i)] >= X[i].
    Dado um indice i do vetor,para se descobrir as posições em que se encontram seu pai,
o filho esquerdo e direito,realizam-se os cálculos: Pai(i) = i/2, filho esquerdo(i) = 2*i, filho direito(i) = 2*i+1.

- Trecho do livro - Estrutura de dados (algoritmos, análise de complexidade e iḿplementações em JAVA e C/C++)
*/

function HeapSort(index, size_of_vector, vetor) {
    let index_right,
    index_left,
    max_index,
    auxiliar;
    
    max_index = index;
    
    if(2 * index + 1 <= size_of_vector) {
        index_right = 2 * index + 1;
        index_left = 2 * index;
        if(vetor[index_right] >= vetor[index_left] && vetor[index_right] > vetor[index])
            max_index = 2 * index + 1;
        else if (vetor[index_left] > vetor[index_right] && vetor[index_left] > vetor[index])
            max_index = 2 * index;
    }
    else if(2 * index <= size_of_vector) {
        index_left = 2 * index;
        if(vetor[index_left] > vetor[index])
            max_index = 2 * index;
    }

    if(max_index != index) {
        auxiliar = vetor[index];
        vetor[index] = vetor[max_index];
        vetor[max_index] = auxiliar;
        HeapSort(max_index, size_of_vector, vetor);
    }
}

function transformaHeap(size_of_vector, vetor) {
    let index = Math.floor(size_of_vector/2);
    for(index; index >= 0; index--) {
        HeapSort(index, size_of_vector, vetor);
    }
}

function ordena(size_of_vector, vetor) {
    let index,
    auxiliar,
    last_position;
    for(index = size_of_vector; index >= 1; index--) {
        auxiliar = vetor[0];
        vetor[0] = vetor[index];
        vetor[index] = auxiliar;
        last_position = index - 1;
        HeapSort(0, last_position, vetor);
    }
}

let vetor = [99, 10, 3, 4, 2, 5, 7, 6, 44, 33, 22, 12, 13, 11, 8, 9, 1, 101, 100, 102];

console.log(`Vetor antes da ordenação:\n${vetor}`);

transformaHeap(vetor.length-1, vetor);
ordena(vetor.length-1, vetor);

console.log(`Vetor após a ordenação:\n${vetor}`);

