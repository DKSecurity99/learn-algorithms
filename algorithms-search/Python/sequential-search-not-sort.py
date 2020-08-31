#    O algoritmo de busca sequencial pode ser executado em um vetor não ordenado e em um
# vetor ordenado.Em um vetor não ordenado,será buscado o número até que ele seja encontrado ou até 
# chegar ao fim do vetor.Em um vetor ordenado,será buscado o número até que ele seja encontrado e 
# enquanto ele for maior que o item do vetor.

#  - Trecho retirado do livro - Estruturas de dados,algoritmos,análise de complexidade e implementaçôes.

#$ Implementação para vetor não ordenado

def sequentialSearch(vetor, item):
    index = 0
    found = False
    size = len(vetor)

    while index < size and found != True:
        if vetor[index] == item: found = True
        else: index += 1
    if found:
        print(f'O item [{item}] foi encontrado na posição [{index}]')
    else:
        print(f'O item [{item}] não esta presente no vetor')

vetor = [10, 2, 3, 4, 5, 1, 8, 7, 9, 6]

print(f'Vetor passado como parâmetro:\n{vetor}')

sequentialSearch(vetor, 2)
sequentialSearch(vetor, 11)
sequentialSearch(vetor, 10)
sequentialSearch(vetor, 8)
sequentialSearch(vetor, 17)
sequentialSearch(vetor, 9)
