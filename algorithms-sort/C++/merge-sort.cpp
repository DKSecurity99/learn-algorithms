#include <iostream>
#include <cmath>

using namespace std;

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

void merge(int vetor[], int start, int half, int end){
    int size_index_half = half - start + 1;
    int size_index_end = end - half;
    
    int top_left, top_right;

    int left[size_index_half], right[size_index_end];
    
    for(top_left = 0; top_left < size_index_half; top_left++){
        left[top_left] = vetor[start + top_left];
    }
    for(top_right = 0; top_right < size_index_end; top_right++){
        right[top_right] = vetor[half + 1 + top_right];
    }
    
    top_left = 0;
    top_right = 0;
    int index_main = start;

    while(top_left < size_index_half && top_right < size_index_end){
        if(left[top_left] < right[top_right]){
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
        top_left++, index_main++;
    }
    while(top_right < size_index_end){
        vetor[index_main] = right[top_right];
        top_right++, index_main++;
    }
}

void mergeSort(int vetor[], int start, int end){
    if(start < end){
        int half = round(start + (end - start) / 2);
        mergeSort(vetor, start, half);
        mergeSort(vetor, half+1, end);
        merge(vetor, start, half, end);
    }
}

void showVetor(int vetor[], int size_vetor){
    int index;
    for(index = 0; index < size_vetor; index++){
        cout << vetor[index] << " ";
    }
}

int vetor[10] = {10, 2, 3, 1, 4, 7, 5, 6, 8, 9};

int main(){
    cout << "\nVetor antes da ordenação:\n";
    showVetor(vetor, 10);

    cout << "\nVetor apos a ordenação:\n";
    mergeSort(vetor, 0, 9);
    showVetor(vetor, 10);

    return 0;
}
