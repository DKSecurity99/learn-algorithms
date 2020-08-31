#include <iostream>
#include <cmath>

using namespace std;

/*
    A classificação de shell é um algoritmo que primeiro separa os elementos um do outro e 
 reduz sucessivamente o intervalo entre os elementos a serem classificados. É uma versão 
 generalizada da classificação por inserção.
    Na classificação do shell, os elementos em um intervalo específico são classificados.
 O intervalo entre os elementos é diminuído gradualmente com base na sequência usada.
 O desempenho da classificação do shell depende do tipo de sequência usada para uma 
 determinada matriz de entrada.

 - Trecho retirado da plataforma - Programiz -  https://www.programiz.com */

void shellSort(int vetor[], int size_to_vetor){
    int gap = round(size_to_vetor / 2);
    
    while(gap > 0){
        for(int index = gap; index < size_to_vetor; index++){
            int auxiliar = vetor[index];
            int index_auxiliar = index;

            while(index_auxiliar >= gap and vetor[index_auxiliar - gap] > auxiliar){
                vetor[index_auxiliar] = vetor[index_auxiliar - gap];
                index_auxiliar -= gap;
            }
            vetor[index_auxiliar] = auxiliar;
        }
        gap = round(gap / 2);
    }
}

void showVector(int vetor[], int size_to_vetor){
    for(int index = 0; index < size_to_vetor; index++){
        cout << vetor[index] << " ";
    }
}

int main(){
    int vetor[11] = {9, 8, 6, 4, 1, 100, 2, 5, 3, 99, 87};

    cout << "Vetor antes da ordenação:\n";
    showVector(vetor, 11);
    shellSort(vetor, 11);
    cout << "\nVetor após a ordenação:\n";
    showVector(vetor, 11);

    return 0;
}
