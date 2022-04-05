from random import randint
from time import sleep

computador = randint(0, 5)
jogador = int(input("Em que número eu pensei: "))

if jogador == computador:
    print("Você venceu! ")
else:
    while jogador != computador:
        print("Perdeu, eu pensei no número {}, não em {}.".format(computador, jogador))
        computador =+ randint(0, 5)
        jogador =+ int(input("Tente novamente, amigo! Em que número eu pensei?"))

