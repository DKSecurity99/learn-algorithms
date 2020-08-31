/*
A busca
binária. A ideia básica do algoritmo é percorrer a tabela como se folheia, por exemplo, uma lista telefônica,
abandonando-se as partes do catálogo onde o nome procurado, com certeza, não será encontrado. Em tabelas, o
primeiro nó pesquisado é o que se encontra no meio; se a comparação não é positiva, metade da tabela pode ser
abandonada na busca, uma vez que o valor procurado se encontra ou na metade inferior (se for menor), ou na

- Trecho do livro - Estruturas de dados e seus algoritmos
*/

function binarySearch(vector, target){
    let min_index = 0;
    let max_index = vector.length - 1;
    let middle;

    while (min_index <= max_index){
        middle = Math.floor((min_index + max_index) / 2);
        if(vector[middle] === target){
            return `The item is in the index: ${middle}`;
        } else if (vector[middle] < target){
            min_index = middle + 1;
        } else {
            max_index = middle - 1;
        }
    }
    return `The item was not found!`;
}

const vector = [1, 2, 3, 4, 5, 6, 7, 8, 9];

console.log(vector);
console.log(binarySearch(vector, 4));
