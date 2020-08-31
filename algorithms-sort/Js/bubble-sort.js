/* 
O método de ordenação bubble é bastante simples, e talvez seja o método de ordenação mais difundido. Uma iteração
do mesmo se limita a percorrer a tabela do início ao fim, sem interrupção, trocando de posição dois elementos
consecutivos sempre que estes se apresentem fora de ordem. Intuitivamente percebe-se que a intenção do método é
mover os elementos maiores em direção ao fim da tabela. Ao terminar a primeira iteração pode-se garantir que as
trocas realizadas posicionam o maior elemento na última posição. Na segunda iteração, o segundo maior elemento é
posicionado, e assim sucessivamente. O processamento é repetido então n – 1 vezes

- Trecho do livro = Estruturas de dados e seus algoritmos
*/

let vetor1 = [2, 5, 3, 6, 8, 1, 4, 10, 9, 11, 7, 100, 50, 90, 45];
let vetor2 = [2, 5, 3, 6, 8, 1, 4, 10, 9, 11, 7, 100, 50, 90, 45];

let validate;
let vetorAtual;

const bubbleWithFor = (vetor, sizeVetor) => {
    for(let index = 0; index < sizeVetor; index++){
        validate = false;
        for(let item = 0; item < sizeVetor; item++){
            if(vetor[item] > vetor[item+1]){
                vetorAtual = vetor[item];
                vetor[item] = vetor[item+1];
                vetor[item+1] = vetorAtual;
                validate = true;
            }
        }
        if(!validate) break;
    }
    return vetor;
}

const bubbleWithDoWhile = (vetor, sizeVetor) => {
    do{
        validate = false;
        for(let index = 0; index < sizeVetor; index++){
            if(vetor[index] > vetor[index +1]){
                vetorAtual = vetor[index];
                vetor[index] = vetor[index +1];
                vetor[index +1] = vetorAtual;
                validate = true;
            }
        }
    } while(validate);
    return vetor;
}

console.log(bubbleWithFor(vetor1, vetor1.length-1));
console.log(bubbleWithDoWhile(vetor2, vetor2.length-1));
