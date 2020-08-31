#include <iostream>
#include <cmath>
using namespace std;

/*
A busca
binária. A ideia básica do algoritmo é percorrer a tabela como se folheia, por exemplo, uma lista telefônica,
abandonando-se as partes do catálogo onde o nome procurado, com certeza, não será encontrado. Em tabelas, o
primeiro nó pesquisado é o que se encontra no meio; se a comparação não é positiva, metade da tabela pode ser
abandonada na busca, uma vez que o valor procurado se encontra ou na metade inferior (se for menor), ou na

- Trecho do livro - Estruturas de dados e seus algoritmos
*/

int vetor[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

int binarySearch(int vetor[], int target, int sizeVetor){
    int min_index = 0;
    int max_index = sizeVetor - 1;
    int middle;
    while(min_index <= max_index){
        middle = round((min_index + max_index) / 2);
        if(vetor[middle] == target){
            return middle;
        } else if (vetor[middle] < target){
            min_index = middle + 1;
        } else {
            max_index = middle - 1;
        }
    }
    return -1; // retorna -1 se o item não for encontrado
}

void showVetor(int vetor[], int sizeVetor){
    int index;
    for(index = 0; index < sizeVetor; index++){
        cout << vetor[index] << " ";
    }
}

int main(){
    showVetor(vetor, 9);
    int result = binarySearch(vetor, 4, 9);
    
    if(result >= 0){
        cout << "\nThe item is in the index: " << result << "\n";
    } else {
        cout << "The item was not found!\n";
    }
    return 0;
}
