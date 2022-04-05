maiorhomem = 0
maiormulher = 0
somaidade = 0
nomevelho = 0
nomevelha = 0
novinha = 0
for c in range(0, 4):
    sexo = str(input("Qual o seu sexo? (M ou F) "))
    nome = str(input("Qual o seu nome? "))
    idade = int(input("Qual a sua idade? "))
    somaidade += idade
    if sexo == 'M' and c == 0:
        maiorhomem = idade
        nomevelho = nome
    if sexo == 'M' and c > 0:
        if idade > maiorhomem:
            maiorhomem = idade
            nomevelho == nome
    if sexo == 'F' and c == 0:
        maiormulher = idade
        nomevelha = nome
    if sexo == 'F' and c > 0:
        if idade > maiormulher:
            maiormulher = idade
            nomevelha == nome
    if sexo in 'F' and idade < 20:
        novinha += 1
        

print(" A média da idade dos integrantes é {}.".format(somaidade/4))
print(nomevelho)
print(nomevelha)
print(maiorhomem)
print(maiormulher)
print(novinha)
