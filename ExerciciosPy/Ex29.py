velocidade = float(input("Qual é a velocidade do carro?"))
if velocidade >= 80:
    print("Multado! Você excedeu o limite permitido que é de 80km/h!")
    multa = (velocidade - 80) * 7
    print("Você será multado em {} Reais".format(multa))

print("Tenha um bom dia, dirija com segurança!")
