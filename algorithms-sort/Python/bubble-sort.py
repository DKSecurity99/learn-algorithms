# O método de ordenação bolha é bastante simples, e talvez seja o método de ordenação mais difundido. Uma iteração
# do mesmo se limita a percorrer a tabela do início ao fim, sem interrupção, trocando de posição dois elementos
# consecutivos sempre que estes se apresentem fora de ordem. Intuitivamente percebe-se que a intenção do método é
# mover os elementos maiores em direção ao fim da tabela. Ao terminar a primeira iteração pode-se garantir que as
# trocas realizadas posicionam o maior elemento na última posição. Na segunda iteração, o segundo maior elemento é
# posicionado, e assim sucessivamente. O processamento é repetido então n – 1 vezes

# - Trecho do livro = Estruturas de dados e seus algoritmos

vector = [9, 10, 2, 3, 101, 98, -1, 80, 85, 40, 45, 1, 20, 15, 30]

def bubble(vector):
    vectorSize = len(vector)
    for index in range(vectorSize-1):
        validate = False
        for item in range(vectorSize-1):
            if vector[item] > vector[item+1]:
                vector[item], vector[item+1] = vector[item +1], vector[item]
                validate = True
        if validate != True: break

print(f'\033[0;32mVetor não Ordenado: {vetor}\033[')

bubble(vector)

print(f'm\033[0;36mVetor Ordenado: {vetor}\033[m')

