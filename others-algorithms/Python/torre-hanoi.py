# O algoritimo de hanoi, que é baseado em um game, consiste em
# Mover uma quantidade de discos de uma haste para a outra, usando uma haste auxiliar
# Com a regra de quer, um disco grande nunca pode ficar por cima de um pequeno
# Isso tudo é realizado usando recursividade.

def hanoi(nDiscos, fromHaste, toHaste, viaHaste):
    if nDiscos == 1:
        print(f'Mova o disco 1 de {fromHaste} para {toHaste}')
    else:
        hanoi(nDiscos-1, fromHaste, viaHaste, toHaste)
        print(f'Mova o disco {nDiscos} de {fromHaste} para {toHaste}')
        hanoi(nDiscos-1, viaHaste, toHaste, fromHaste)

hanoi(4, 1, 2, 3)

