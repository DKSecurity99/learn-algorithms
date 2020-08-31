#include <iostream>
#include <cmath>

using namespace std;

int vetor[10] = {8,10,4,6,3,2,1,7,9,5};

void HeapSort(int index, int size_of_vector) {
    int index_right,
    index_left,
    maior_index,
    auxiliar;
    
    maior_index = index;

    if(2 * index + 1 <= size_of_vector) {
        index_right = 2 * index + 1;
        index_left = 2 * index;
        if(vetor[index_right] > vetor[index_left] && vetor[index_right] > vetor[index])
        maior_index = 2 * index + 1;
        else if (vetor[index_left] > vetor[index_right] && vetor[index_left] > vetor[index])
        maior_index = 2 * index;
    }
    else if(2 * index <= size_of_vector) {
        index_left = 2 * index;
        if(vetor[index_left] > vetor[index])
        maior_index = 2 * index;
    }

    if(maior_index != index) {
        auxiliar = vetor[index];
        vetor[index] = vetor[maior_index];
        vetor[maior_index] = auxiliar;
        HeapSort(maior_index, size_of_vector);
    }
}

void TransformaHeap(int size_of_vector) {
    int index;
    int half = round(size_of_vector/2);
    for(index =  half; index >= 0; index--) {
        HeapSort(index, size_of_vector);
    }
}

void ordena(int size_of_vector) {
    int index,
    auxiliar,
    last_position;
    for(index = size_of_vector; index >= 1; index--) {
        auxiliar = vetor[0];
        vetor[0] = vetor[index];
        vetor[index] = auxiliar;
        last_position = index - 1;
        HeapSort(0, last_position);
    }
}

void showVetor(int size_of_vector, int vetor[]) {
    int index;
    for(index = 0; index <= size_of_vector; index++) {
        cout << vetor[index] << " ";
    }
}

int main() {

    int size_of_vector = 9;

    cout << "Vetor antes da ordenação:\n";
    showVetor(size_of_vector, vetor);

    TransformaHeap(size_of_vector);
    ordena(size_of_vector);

    cout << "\nVetor após a ordenação:\n";
    showVetor(size_of_vector, vetor);

    return 0;
}
