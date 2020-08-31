#include <iostream>

using namespace std;

/*
O Quicksort é o algoritmo mais ezciente na ordenação por comparação. Nele se
escolhe um elemento chamado de pivô, a partir disto é organizada a lista para que
todos os números anteriores a ele sejam menores que ele, e todos os números
posteriores a ele sejam maiores que ele. Ao znal desse processo o número pivô já
está em sua posição final. 

- Trecho retirado da pltaforma DevMedia
*/

int vetor[10] = {1, 4, 2, 3, 6, 5, 8, 7, 10, 9};

void trocaItemsNoVetor(int vetor[], int initial, int end){
    int aux;
    aux = vetor[initial];
    vetor[initial] = vetor[end];
    vetor[end] = aux;
}

int particao(int vetor[], int initial, int end){
    int pivo, index_initial, index_end;
    pivo = vetor[(initial + end) / 2]; // item na posicao do pivo
    index_initial = initial - 1;
    index_end = end + 1;

    while(index_initial < index_end){
        do{
            index_end -= 1;
        } while(vetor[index_end] > pivo); // enquanto o item na posicao J for maior que o item na posicao do pivo

        do{
            index_initial += 1;
        } while(vetor[index_initial] < pivo); // enquanto  o item na posicao I for menor que o item na posicao do pivo
        if(index_initial < index_end){// se o indice I for menor que o indice J então troca 
            trocaItemsNoVetor(vetor, index_initial, index_end);
        }
    }
    return index_end;
}

void quickSort(int vetor[], int initial, int end){
    int half;
    if(initial < end){
        half = particao(vetor, initial, end);
        quickSort(vetor, initial, half);
        quickSort(vetor, half+1, end);
    }
}

void showVetor(int vetor[], int size){
    int counter;
    for(counter = 0; counter < size; counter++){
        cout << vetor[counter] << " ";
    }
}

int main(){
    
    cout << "\nVetor antes da ordenação:\n";
    showVetor(vetor, 10);
    cout << "\nVetor após a ordenação:\n";
    quickSort(vetor, 0, 9);
    showVetor(vetor, 10);

    return 0;
}
