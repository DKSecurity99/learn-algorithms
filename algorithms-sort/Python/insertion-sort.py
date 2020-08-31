#    A ideia do insertion sort consiste em ordenar os itens, inserindo-os na posição
# corresponde da lista
#    Compare o valor do item “chave” que está entrando com os outros itens até que se
# sua posição seja encontrada. Essa comparação é feita em direção à esquerda.
#    Se o item que você está comparando for menor, desloque o item para a direita ,
# visando “abrir” um novo espaço para colocar a carta na posição correspondente
#    Finalmente ao encontrar um item maior ou não haver mais itens, significa que você
# encontrou a posição que este item deve estar: coloque o item “chave” na posição
# correspondente.

# - Trecho ritirado da Medium - @HenriqueBraga

def insertion_sort(vetor):
    if len(vetor) <= 1:
        return vetor
    for index_right in range(1, len(vetor)):
        index_left = index_right - 1
        item_to_vetor = vetor[index_right] 
        while index_left >= 0 and item_to_vetor < vetor[index_left]:
            vetor[index_left + 1] = vetor[index_left]
            index_left -= 1 
            vetor[index_left + 1] = item_to_vetor
    return vetor

vetor = [6, 8, 7, 5, 4, 3, 2, 1]

print(f'Vetor antes da ordenação:\n{vetor}\n')
print(f'Vetor após a ordenação:\n{insertion_sort(vetor)}')
