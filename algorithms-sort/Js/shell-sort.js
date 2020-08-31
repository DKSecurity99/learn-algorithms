/*
    A classificação de shell é um algoritmo que primeiro separa os elementos um do outro e 
 reduz sucessivamente o intervalo entre os elementos a serem classificados. É uma versão 
 generalizada da classificação por inserção.
    Na classificação do shell, os elementos em um intervalo específico são classificados.
 O intervalo entre os elementos é diminuído gradualmente com base na sequência usada.
 O desempenho da classificação do shell depende do tipo de sequência usada para uma 
 determinada matriz de entrada.

 - Trecho retirado da plataforma - Programiz -  https://www.programiz.com */

function shellSort(vetor, size_to_vetor){
    let gap = Math.floor(size_to_vetor / 2);
    
    while(gap > 0){
        for(let index = gap; index < size_to_vetor; index++){
            let auxiliar = vetor[index];
            let index_auxiliar = index;

            while(index_auxiliar >= gap && vetor[index_auxiliar - gap] > auxiliar){
                vetor[index_auxiliar] = vetor[index_auxiliar - gap];
                index_auxiliar -= gap;
            }
            vetor[index_auxiliar] = auxiliar;
        }
        gap = Math.floor(gap / 2);
    }
}

const vetor = [9, 8, 6, 4, 1, 100, 2, 5, 3, 99, 87];

console.log(`Vetor antes da ordenação:\n${vetor}`);
shellSort(vetor, vetor.length);
console.log(`Vetor após a ordenação:\n${vetor}`);

