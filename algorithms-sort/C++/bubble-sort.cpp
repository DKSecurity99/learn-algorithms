#include <iostream>
using std::cout;

/*
O método de ordenação bolha é bastante simples, e talvez seja o método de ordenação mais difundido. Uma iteração
do mesmo se limita a percorrer a tabela do início ao fim, sem interrupção, trocando de posição dois elementos
consecutivos sempre que estes se apresentem fora de ordem. Intuitivamente percebe-se que a intenção do método é
mover os elementos maiores em direção ao fim da tabela. Ao terminar a primeira iteração pode-se garantir que as
trocas realizadas posicionam o maior elemento na última posição. Na segunda iteração, o segundo maior elemento é
posicionado, e assim sucessivamente. O processamento é repetido então n – 1 vezes

- Trecho do livro = Estruturas de dados e seus algoritmos.
*/

int vetor[14] = {14, 2, 4, 3, 1, 13, 15, 5, 11, 6, 8, 7, 10, 9};
bool validate;

void bubble(int vetor[], int sizeVetor){
    int itemAtual = 0;
    do{
        validate = false;
        for(int index = 0; index < sizeVetor; index++){
            if(vetor[index] < vetor[index-1]){
                itemAtual = vetor[index];
                vetor[index] = vetor[index-1];
                vetor[index-1] = itemAtual;
                validate = true;
            }
        }
    } while(validate);
}

void showVetor(int vetor[], int sizeVetor){
    for(int index = 0; index < sizeVetor; index++){
        cout <<  vetor[index] << " ";
    }
}

int main(){
    cout << "\nVetor antes da ordenação\n";
    showVetor(vetor, 14);
    cout << "\nVetor apos a ordenação\n";
    bubble(vetor, 14);
    showVetor(vetor, 14);

    return 0;
}
