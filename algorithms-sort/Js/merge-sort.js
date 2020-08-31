/*
    A ideia básica do método é intercalar as duas metades da lista desejada quando estas já se encontram ordenadas.
Na realidade, deseja-se então ordenar primeiramente as duas metades, o que pode ser feito utilizando
recursivamente o mesmo conceito.
    Primeiramente, o processo de intercalação será revisto. Sejam duas listas A e B, ordenadas, com respectivamente
n e m elementos. As duas listas são percorridas por ponteiros ptA e ptB, armazenando o resultado da intercalação na
lista C, apontada pelo ponteiro ptC. O primeiro elemento de A é comparado com o primeiro elemento de B; o menor
valor é colocado em C. O ponteiro da lista onde se encontra o menor valor é incrementado, assim como o ponteiro
da lista resultado; o processo se repete até que uma das listas seja esgotada. Neste ponto, os elementos restantes da
outra lista são copiados na lista resultado.

- Trecho do livro - Estruturas de dados e seus algoritmos
*/

function mergeSort(vetor, start, end){
    if(start < end){
        let half = Math.floor((start + end) / 2);
        mergeSort(vetor, start, half);
        mergeSort(vetor, half+1, end);
        merge(vetor, start, half, end);
    }
}

function merge(vetor, start, half, end){
    let size_index_half = half - start + 1;
    let size_index_end = end - half; 
    const left = [size_index_half];
    const right = [size_index_end];
    
    let top_left;
    let top_right;

    for(top_left = 0; top_left < size_index_half; top_left++){
        left[top_left] = vetor[start + top_left]; 
    } 
    for(top_right = 0; top_right < size_index_end; top_right++){
        right[top_right] = vetor[half + 1 + top_right]; 
    }

    top_left = 0;
    top_right = 0;
    let index_main = start;

    while(top_left < size_index_half && top_right < size_index_end){
        if(left[top_left] <= right[top_right]){
            vetor[index_main] = left[top_left];
            top_left++;
        } else {
            vetor[index_main] = right[top_right];
            top_right++;
        }
        index_main++;
    }

    while(top_left < size_index_half){
        vetor[index_main] = left[top_left];
        top_left++;
        index_main++;
    }

    while(top_right < size_index_end){
        vetor[index_main] = right[top_right];
        top_right++;
        index_main++;
    }
}

const vetor = [9, 7, 8, 6, 10, 5, 11, 14, 13, -1, 0, 4, 3, 2, 1];

console.log(`Vetor antes da ordenação:\n${vetor}`);

mergeSort(vetor, 0, vetor.length-1);

console.log(`Vetor após a ordenação:\n${vetor}`);
