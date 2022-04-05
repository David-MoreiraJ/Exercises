from random import randint
player = cont = comp = 0
jogador = ''
máquina = ''
resultado = 0
while True:
    player = int(input('Ímpar ou par? '))
    if player % 2 == 0:
        print("O jogador jogou Par!")
        jogador = str('par')
    else:
        print("O jogador jogou ímpar!")
        jogador = str('ímpar')

    comp = randint(1, 2)
    if comp % 2 == 0:
        print("A máquina jogou par!")
        máquina = str('par')
    else:
        print("A máquina jogou ímpar!")
        máquina = str('ímpar')
    
    resultado = player + comp

    if resultado % 2 == 0 and jogador == 'par' and máquina == 'ímpar':
        print("O jogador venceu! Continuando... ")
    elif resultado % 2 == 1 and jogador == 'par' and máquinha == 'par':
        print("O jogador venceu! continuando...")
    elif resultado % 2 == 0 and jogador == 'ímpar' and máquina == 'par':
        print("A máquina venceu! Game ouver!")
        break
    elif resultado % 2 == 1 and jogador == 'par' and máquina == 'ímpar':
        print("A máquina venceu! Game over! ")
        break
    elif jogador == máquina:
        print("Empate! Continuando o jogo!")
    resultado == 0





