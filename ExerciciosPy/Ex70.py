preço = preçomil = preçototal = preçomenor = 0
nome = barato = seleção = ''


while True:
    nome = str(input("Qual o nome do seu produto? "))
    preço = float(input("Qual o preço do seu produtp? "))
    preçototal += preço
    if preço > 1000:
        preçomil += 1
    if preçomenor == 0:
        preçomenor += preço
    if preçomenor == preço:
        barato = nome

    seleção = str(input("Você deseja continuar? S/N "))
    if seleção == "N":
        break
print(f"O total gasto na compra foi {preçototal}. {preçomil} produtos custaram mais de 1000R$. {barato} foi a compra mais barata.")




