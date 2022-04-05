print("Calculadora inteligente iniciando! Bip Bop!")
a = 0
b = 0
l = 0
while l != 5 or l == 4:
    a =+ int(input("Me dê seu primeiro valor "))
    b =+ int(input("Me dê seu segundo valor "))
    l =+ int(input("""Qual operação você quer realizar?
    [1] SOMAR
    [2] MULTIPLICAR
    [3] MAIOR
    [4] NOVOS NÚMEROS
    [5] SAIR """))
    if l == 1:
        print(a + b)
        print("Reiniciando!")
    elif l == 2:
        print(a * b)
        print("Reiniciando!")
    elif l == 3:
        if a > b:
            print("{} é maior do que {}.".format(a, b))
        else:
            print("{} é maior do que {}.".format(b, a))
print("Calculadora desligando! Adeus, e obrigado por tudo, humanos!")
    

