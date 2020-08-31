/*
    A ideia do insertion sort consiste em ordenar os itens, inserindo-os na posição
corresponde da lista
    Compare o valor do item “chave” que está entrando com os outros itens até que se
sua posição seja encontrada. Essa comparação é feita em direção à esquerda.
    Se o item que você está comparando for menor, desloque o item para a direita ,
visando “abrir” um novo espaço para colocar a carta na posição correspondente
    Finalmente ao encontrar um item maior ou não haver mais itens, significa que você
encontrou a posição que este item deve estar: coloque o item “chave” na posição
correspondente.

- Trecho ritirado da Medium - @HenriqueBraga
*/

function insertionSort(vetor, sizeVetor){
    let index_right = 0;
    let index_left = 0;
    if(sizeVetor <= 1) return vetor;
    for(index_right = 1; index_right < sizeVetor; index_right++){
        index_left = index_right - 1;
        itemToVetor = vetor[index_right];
        while(index_left >= 0 && itemToVetor < vetor[index_left]){
            vetor[index_left + 1] = vetor[index_left];
            index_left -= 1;
            vetor[index_left + 1] = itemToVetor
        }
    }
    return vetor;
}

const vetor = [6, 8, 7, 5, 4, 3, 2, 1]

console.log(`Vetor antes da ordenção:\n${vetor}\n`);
console.log(`Vetor após a ordenção:\n${insertionSort(vetor, vetor.length)}`);
