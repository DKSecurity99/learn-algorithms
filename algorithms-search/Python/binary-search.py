# A busca
# binária. A ideia básica do algoritmo é percorrer a tabela como se folheia, por exemplo, uma lista telefônica,
# abandonando-se as partes do catálogo onde o nome procurado, com certeza, não será encontrado. Em tabelas, o
# primeiro nó pesquisado é o que se encontra no meio; se a comparação não é positiva, metade da tabela pode ser
# abandonada na busca, uma vez que o valor procurado se encontra ou na metade inferior (se for menor), ou na

# - Trecho do livro - Estruturas de dados e seus algoritmos

def binarySearch(vector, target):
    min_index = 0
    max_index = len(vector) - 1
    middle = 0
    while min_index <= max_index:
        middle = round((min_index + max_index) / 2)
        if vector[middle] == target:
            return f'The item is in the index: {middle}'
        elif vector[middle] < target:
            min_index = middle + 1
        else:
            max_index = middle - 1
    return f'The item was not found'

vector = [1, 2, 3, 4, 5, 6, 7, 8, 9]

print(f'{vector}\n')
print(binarySearch(vector, 8)) # Valor a ser buscado dentro do vetor
