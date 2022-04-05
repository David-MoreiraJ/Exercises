AnoNasc = int(input("Qual o seu ano de Nascimento?"))
Idade = 2021 - AnoNasc

if Idade <= 9:
    print("Você é um atleta de Nível Mirim!")
elif Idade <= 14:
    print("Você é um atleta de Nível Infantil!")
elif Idade <= 19:
    print("Você é um atleta de Nível Júnior!")
elif Idade <= 25:
    print("Você é um atleta de Nível Sênior!")
else:
    print("Você é um atleta de Nível Master!")
