from random import randint
print("""Suas opções:
[0] Pedra
[1] Papel
[2] Tesoura""")
items = ('Pedra', 'Papel', 'Tesoura')
computador = randint(0, 2)
jogador = int(input("Qual é a sua jogada:"))
print("Computador jogou {}".format(items[computador])) 
print("Jogador jogou {}".format(items[jogador]))
if computador == 0:
    if jogador == 0:
        print("Vocês empataram!")
    elif jogador == 1:
        print("O jogador ganhou!")
    elif jogador == 2:
        print("O computador ganhou!")
if computador == 1:
    if jogador == 0:
        print("O computador ganhou!")
    elif jogador == 1:
        print("Vocẽs empataram!")
    elif jogador == 2:
        print("O jogador ganhou!")
if computador == 2:
    if jogador == 0:
        print("O jogador ganhou!")
    elif jogador == 1:
        print("O computador ganhou!")
    elif jogarod == 2:
        print("Vocẽs empataram")



