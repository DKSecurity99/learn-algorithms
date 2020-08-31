/*
    O algoritmo de busca sequencial pode ser executado em um vetor não ordenado e em um
vetor ordenado.Em um vetor não ordenado,será buscado o número até que ele seja encontrado ou até 
chegar ao fim do vetor.Em um vetor ordenado,será buscado o número até que ele seja encontrado e 
enquanto ele for maior que o item do vetor.

 - Trecho retirado do livro - Estruturas de dados,algoritmos,análise de complexidade e implementaçôes.

*/

// Implementação para vetor não ordenado

function sequenceSearch(vetor, item){
    let index = 0;
    let found = false;
    const size_to_vetor = vetor.length;
    
    while (index < size_to_vetor && found !== true){
        vetor[index] === item ? found = true : index++;
    }

    if(found){
        console.log(`O item [${item}] foi encontrado na posição: [${index}]`);
    } else {
        console.log(`O item [${item}] não esta presente no vetor`);
    }
}

const vetor = [5, 4, 3, 2, 1, 10, 11, 12, 13, 14, 15];

console.log(`Vetor passado como parâmetro:\n${vetor}\n`);

sequenceSearch(vetor, 4);
sequenceSearch(vetor, 7);
sequenceSearch(vetor, 1);
sequenceSearch(vetor, 12);
sequenceSearch(vetor, 14);
sequenceSearch(vetor, 5);
sequenceSearch(vetor, 3);
sequenceSearch(vetor, 15);
sequenceSearch(vetor, 16);
