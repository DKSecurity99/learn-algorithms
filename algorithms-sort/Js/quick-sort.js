/*
O Quicksort é o algoritmo mais ezciente na ordenação por comparação. Nele se
escolhe um elemento chamado de pivô, a partir disto é organizada a lista para que
todos os números anteriores a ele sejam menores que ele, e todos os números
posteriores a ele sejam maiores que ele. Ao znal desse processo o número pivô já
está em sua posição final. 

- Trecho retirado da pltaforma DevMedia
*/

function trocaItemsNoVetor(vetor, initial, end) {
    let aux;
    aux = vetor[initial];
    vetor[initial] = vetor[end];
    vetor[end] = aux;
}

function particao(vetor, initial, end) {
    let pivo,
    index_initial,
    index_end,
    half;

    half = Math.floor((initial + end) / 2);

    pivo = vetor[half];
    index_initial = initial - 1;
    index_end = end + 1;

    while (index_initial < index_end) {
        do {
            index_end -= 1;
        }while (vetor[index_end] > pivo)
        do {
            index_initial += 1;
        }while (vetor[index_initial] < pivo)
            if (index_initial < index_end) {
            trocaItemsNoVetor(vetor, index_initial, index_end);
        }
    }
    return index_end;
}

function quickSort(vetor, initial, end) {
    let half;
    if (initial < end) {
        half = particao(vetor, initial, end);
        quickSort(vetor, initial, half);
        quickSort(vetor, half+1, end);
    }
}

const vetor = [5, 3, 4, 2, 6, 1, 7, 9, 8, 10];

console.log(`Vetor antes da ordenação:\n${vetor}`);
quickSort(vetor, 0, vetor.length-1);
console.log(`Vetor após a ordenação:\n${vetor}`);
