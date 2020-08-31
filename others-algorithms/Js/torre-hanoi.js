/*
O algoritimo de hanoi, que é baseado em um game, consiste em                     
Mover uma quantidade de discos de uma haste para a outra, usando uma haste auxiliar
Com a regra de quer, um disco grande nunca pode ficar por cima de um pequeno
Isso tudo é realizado usando recursividade.
*/

function hanoi(nDiscos, fromHaste, toHaste, viaHaste){
    if(nDiscos === 1){
        console.log(`Mova o disco 1 de ${fromHaste} para ${toHaste}`);
    } else {
        hanoi(nDiscos-1, fromHaste, viaHaste, toHaste);
        console.log(`Mova o disco ${nDiscos} de ${fromHaste} para ${toHaste}`);
        hanoi(nDiscos-1, viaHaste, toHaste, fromHaste);
    }
}

hanoi(4, 1, 2, 3);
