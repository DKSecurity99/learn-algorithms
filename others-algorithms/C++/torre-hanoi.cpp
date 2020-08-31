#include <iostream>
using namespace std;

/*
O algoritimo de hanoi, que é baseado em um game, consiste em                     
Mover uma quantidade de discos de uma haste para a outra, usando uma haste auxiliar
Com a regra de quer, um disco grande nunca pode ficar por cima de um pequeno
Isso tudo é realizado usando recursividade.
*/

void hanoi(int nDiscos, int fromHaste, int toHaste, int viaHaste){
    if(nDiscos == 1){
        cout << "Mova o disco 1 de " << fromHaste << " para " << toHaste << "\n";
    } else {
        hanoi(nDiscos-1, fromHaste, viaHaste, toHaste);
        cout << "Mova o disco " << nDiscos << " de " << fromHaste << " para " << toHaste << "\n";
        hanoi(nDiscos-1, viaHaste, toHaste, fromHaste);
    }
}

int main(){
    hanoi(4, 1, 2, 3);

    return 0;
}
