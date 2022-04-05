n = cont = soma = 0
while True:
    n = int(input("Me dê um número, mortal! "))
    if n == 999:
        break
    soma += n
    cont += 1
print(f'O contador é {cont}, o N é {n}, a soma é {soma}.')

