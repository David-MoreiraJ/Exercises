altura = float(input("Qual a sua altura, em metros?"))
peso = float(input("Qual o seu peso, em quilos?"))
imc = peso / altura ** 2

if imc <= 18.5:
    print("Você está abaixo do peso ideal.")
elif imc <= 25:
    print("Você está no peso ideal.")
elif imc <= 30:
    print("Você está acima do peso ideal, em estado de sobrepeso.")
elif imc <= 40:
    print("Você está obeso.")
else:
    print("Você é um obeso mórbido.")
