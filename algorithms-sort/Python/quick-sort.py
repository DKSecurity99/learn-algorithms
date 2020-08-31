# O Quicksort é o algoritmo mais ezciente na ordenação por comparação. Nele se
# escolhe um elemento chamado de pivô, a partir disto é organizada a lista para que
# todos os números anteriores a ele sejam menores que ele, e todos os números
# posteriores a ele sejam maiores que ele. Ao znal desse processo o número pivô já
# está em sua posição final. 

# - Trecho retirado da pltaforma DevMedia

def trocaItemsNoVetor(vetor, initial, end):
    vetor[initial], vetor[end] = vetor[end], vetor[initial]

def particao(vetor, initial, end):
    half = (initial + end)//2
    pivo = vetor[half]

    index_initial = initial
    index_end = end

    while index_initial < index_end:
        while vetor[index_end] > pivo:
            index_end -= 1
        while vetor[index_initial] < pivo:
            index_initial += 1
        if index_initial < index_end:
            trocaItemsNoVetor(vetor, index_initial, index_end)

    return index_end

def quickSort(vetor, initial, end):
    if(initial < end):
        half = particao(vetor, initial, end)
        quickSort(vetor, initial, half)
        quickSort(vetor, half+1, end)

vetor = [2, 4, 3, 1, 5, 7, 6, 9, 10, 22, 34, 12, 55, 54, 33, 21, -0, 8]

print(f'Vetor antes da ordenação:\n{vetor}')
quickSort(vetor, 0, len(vetor)-1)
print(f'Vetor após a ordenação:\n{vetor}')
