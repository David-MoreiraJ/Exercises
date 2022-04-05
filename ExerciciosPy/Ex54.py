maior = 0
menor = 0
for c in range(0,7):
    x = int(input("Qual a sua idade? "))
    if x >= 18:
        maior += 1
    elif x < 18:
        menor += 1
print("No grupo existem {} pessoas que já atingiram a maioridade e {} que ainda são de menor.".format(maior, menor))

