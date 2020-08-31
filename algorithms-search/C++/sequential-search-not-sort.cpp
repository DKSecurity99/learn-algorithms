#include <iostream>

using namespace std;

/*
    O algoritmo de busca sequencial pode ser executado em um vetor não ordenado e em um
vetor ordenado.Em um vetor não ordenado,será buscado o número até que ele seja encontrado ou até 
chegar ao fim do vetor.Em um vetor ordenado,será buscado o número até que ele seja encontrado e 
enquanto ele for maior que o item do vetor.

 - Trecho retirado do livro - Estruturas de dados,algoritmos,análise de complexidade e implementaçôes.

*/

// Implementação para vetor não ordenado

void sequentialSort(int vetor[], int item, int size){
    bool found = false;
    int index = 0;
    
    while(index < size && found != true){
        if(vetor[index] == item) found = true;
        else index++;
    }
    if(found){
        printf("O item %d foi encontrado na posição %d\n", item, index);  
    } else {
        printf("O item %d não esta presente no vetor\n", item);
    }
}

void showVetor(int vetor[], int size){
    for(int index = 0; index < size; index++){
        cout << vetor[index] << " ";
    }
}

int main(){
    int vetor[10] = {10, 4, 3, 2, 5, 1, 6, 7, 8, 9};

    cout << "Vetor passado como parâmetro:\n";
    showVetor(vetor, 10);
    cout << "\n\n";

    sequentialSort(vetor, 4, 10);
    sequentialSort(vetor, 10, 10);
    sequentialSort(vetor, 11, 10);
    sequentialSort(vetor, 9, 10);
    sequentialSort(vetor, 8, 10);
    sequentialSort(vetor, 19, 10);

    return 0;
}
