valor = float(input("Quanto você vai pagar?"))
pagamento = int(input("""Descreva a sua forma de pagamento
 1-Á vista.
 2-Á vista no cartão.
 3-2x no cartão.
 4-3x ou mais no cartão."""))

if pagamento ==  1:
    total =  (valor * 0.10) - valor * (-1)
elif pagamento == 2:
    total = valor - (valor * 0.05)
elif pagamento == 3:
    total = valor
elif pagamento == 4:
    total = valor - (valor * 0.20)

print("Você pagará {} reais.".format(total)

