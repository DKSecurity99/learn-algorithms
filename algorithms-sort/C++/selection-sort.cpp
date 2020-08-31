#include <iostream>
using namespace std;

// Este algoritmo é baseado em se passar sempre o menor valor do vetor para a primeira
// posição (ou o maior dependendo da ordem requerida), depois o segundo menor valor para
// a segunda posição e assim sucessivamente, até os últimos dois elementos

int vetor[5] = {3, 1, 5, 2, 4};

void changeVector(int vetor[], int index, int min_index){
    int index_actual = vetor[index];
    vetor[index] = vetor[min_index];
    vetor[min_index] = vetor[index_actual];
}

void selection(int vetor[], int sizevetor){
    int index_actual, index, min_index, index_item;
    for(index = 0; index < sizevetor-1; index++){
        min_index = index;
        for(index_item = index+1; index_item < sizevetor; index_item++){
            if(vetor[index_item] < vetor[min_index]){
                min_index = index_item;
            }
        }
        if(vetor[index] > vetor[min_index]){   
            changeVector(vetor, index, min_index);
        }
    }
}
void showVector(int vetor[], int sizevetor){
    for(int index = 0; index < sizevetor; index++){
        cout << vetor[index] << " ";
    }
}

int main(){
    cout << "Vetor antes da ordenação->\n";
    showVector(vetor, 5);
    cout << "\nVetor após a ordenação->\n";
    selection(vetor, 5);
    showVector(vetor, 5);

    return 0;
}
