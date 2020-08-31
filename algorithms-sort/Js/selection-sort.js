// Este algoritmo é baseado em se passar sempre o menor valor do vetor para a primeira
// posição (ou o maior dependendo da ordem requerida), depois o segundo menor valor para 
// a segunda posição e assim sucessivamente, até os últimos dois elementos

vector = [6, 3, 9, 5, 1, 8, 2, 4, 7, 10];

function selection(vector, sizeVetor){ 
    for(let index = 0; index < sizeVetor; index++){
        let min_index = index;
        for(let index_item = index+1; index_item < sizeVetor; index_item++){
            if(vector[index_item] < vector[min_index]){
                min_index = index_item;
            }
        if(vector[index] > vector[min_index])
            changeVector(vector, min_index, index);
        }
    }
}

function changeVector(vector, min_index, index){
    let item_actual =  vector[index];
    vector[index] = vector[min_index];
    vector[min_index] = item_actual;
}

console.log(`Vetor antes da ordenação: \n${vector}\n`);
selection(vector, vector.length-1);
console.log(`Vetor após a ordenação: \n${vector}`);
