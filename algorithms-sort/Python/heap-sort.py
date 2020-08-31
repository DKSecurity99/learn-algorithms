def HeapSort(index, size_of_vector, vetor):
    max_index = index
    if (2 * index + 1) <= size_of_vector:
        index_right = (2 * index + 1)
        index_left = 2 * index

        if vetor[index_right] >= vetor[index_left] and vetor[index_right] > vetor[index]:
            max_index = (2 * index + 1)
        elif vetor[index_left] > vetor[index_right] and vetor[index_left] > vetor[index]:
            max_index = 2 * index
    elif 2 * index <= size_of_vector:
        index_left = 2 * index
        if vetor[index_left] > vetor[index]:
            max_index = 2 * index

    if max_index != index:
        auxiliar = vetor[index]
        vetor[index] = vetor[max_index]
        vetor[max_index] = auxiliar
        HeapSort(max_index, size_of_vector, vetor)

def transformaHeap(size_of_vector, vetor):
    index = round(size_of_vector/2)
    while index >= 0:
        HeapSort(index, size_of_vector, vetor)
        index -= 1

def ordena(size_of_vector, vetor):
    index = size_of_vector
    while index >= 1:
        vetor[0], vetor[index] = vetor[index], vetor[0]
        last_position = index - 1
        HeapSort(0, last_position, vetor)
        index -= 1

vetor = [10, 3, 4, 2, 5, 6, 8, 7, 9, 1, 11, 14, 13, 102, 0, 44, 56, 33, 12, 103, 99]

print(f'Vetor antes da ordenação:\n{vetor}')

transformaHeap(len(vetor) - 1, vetor)
ordena(len(vetor) - 1, vetor)

print(f'Vetor após a ordenação:\n{vetor}')    
