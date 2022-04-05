sexo = ''
contsexo = seleção = idade = contidade = novinhas = 0

while True:
    idade =int(input("Qual a sua idade? "))
    sexo = str(input("Qual o seu sexo? M / F "))
    if idade > 18:
        contidade += 1
    if sexo == 'M':
        contsexo += 1
    if sexo == 'F' and idade < 20:
        novinhas += 1
    seleção = str(input("Você quer continuar? S/N "))
    if seleção == 'N':
        break
print(f"Existem nessa listagem {contidade} com mais de 18 anos. {contsexo} homens e {novinhas} mulheres jovens.") 

