#   A ideia básica do método é intercalar as duas metades da lista desejada quando estas já se encontram ordenadas.
# Na realidade, deseja-se então ordenar primeiramente as duas metades, o que pode ser feito utilizando
# recursivamente o mesmo conceito.
#    Primeiramente, o processo de intercalação será revisto. Sejam duas listas A e B, ordenadas, com respectivamente
# n e m elementos. As duas listas são percorridas por ponteiros ptA e ptB, armazenando o resultado da intercalação na
# lista C, apontada pelo ponteiro ptC. O primeiro elemento de A é comparado com o primeiro elemento de B; o menor
# valor é colocado em C. O ponteiro da lista onde se encontra o menor valor é incrementado, assim como o ponteiro
# da lista resultado; o processo se repete até que uma das listas seja esgotada. Neste ponto, os elementos restantes da
# outra lista são copiados na lista resultado.

# - Trecho do livro - Estruturas de dados e seus algoritmos

def mergesort(lista, inicio=0, fim=None):
    if fim is None:
        fim = len(lista)
    if(fim - inicio > 1):
        meio = (fim + inicio)//2 # divisão inteira
        mergesort(lista, inicio, meio)
        mergesort(lista, meio, fim)
        merge(lista, inicio, meio, fim)

def merge(lista, inicio, meio, fim):
    left = lista[inicio:meio]
    right = lista[meio:fim]
    top_left, top_right = 0, 0
    for k in range(inicio, fim):
        if top_left >= len(left):
            lista[k] = right[top_right]
            top_right = top_right + 1
        elif top_right >= len(right):
            lista[k] = left[top_left]
            top_left = top_left + 1
        elif left[top_left] < right[top_right]:
            lista[k] = left[top_left]
            top_left = top_left + 1
        else:
            lista[k] = right[top_right]
            top_right = top_right + 1

vetor = [5, 4, 3, 2, 1];
mergesort(vetor)
print(vetor)
