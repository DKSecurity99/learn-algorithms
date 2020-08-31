#include <iostream>
using namespace std;

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

int vetor[8] = {6, 7, 8, 5, 4, 3, 2, 1};

void insertionSort(int vetor[], int sizeVetor){
    int index_right, index_left, itemToVetor;    
    if(sizeVetor > 1){
        for(index_right = 1; index_right < sizeVetor; index_right++){
            index_left = index_right - 1;
            itemToVetor = vetor[index_right];
            while(index_left >= 0 && itemToVetor < vetor[index_left]){
                vetor[index_left + 1] = vetor[index_left];
                index_left = index_left - 1;
                vetor[index_left + 1] = itemToVetor;
            }
        }
    }
}

void showVetor(int vetor[], int sizeVetor){
    int index;
    for(index = 0; index < sizeVetor; index++){
        cout << vetor[index] << " ";
    }
}

int main(){
    cout << "\nVetor antes da ordenação:\n";
    
    showVetor(vetor, 8);
    insertionSort(vetor, 8);

    cout << "\nVetor após a ordenação:\n";
    showVetor(vetor, 8);

    return 0;
}
