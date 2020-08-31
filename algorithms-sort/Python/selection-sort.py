# Este algoritmo é baseado em se passar sempre o menor valor do vetor para a primeira
# posição (ou o maior dependendo da ordem requerida), depois o segundo menor valor para
# a segunda posição e assim sucessivamente, até os últimos dois elementos

vector1 = [3, 5, 1, 2, 4]
vector2 = [3, 5, 1, 2, 4]

def selection(vector):
    sizeVector = len(vector)
    for index in  range(sizeVector-1):
        min_index = index # 0
        for index_item in range(index, sizeVector):
            if vector[index_item] < vector[min_index]:
                min_index = index_item
        if vector[index] > vector[min_index]:
            vector[index], vector[min_index] = vector[min_index], vector[index]

print(f'Vetor antes da ordenação:\n{vector1}\n')
selection(vector1)
print(f'Vetor após a ordenação:\n{vector1}')

