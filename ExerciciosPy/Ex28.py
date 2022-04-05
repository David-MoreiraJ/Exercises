from random import randint
from time import sleep

computador = randint(0, 5)
jogador = int(input("Em que número eu pensei?"))
print("Processando...")
sleep(2)
if jogador == computador:
    print("Você venceu!")
else:
    print("Perdeu, eu pensei no número {} e não no {}".format(computador, jogador))
