contagem = ('um', 'dois', 'tres', 'quatro', 'cinco', 'seis', 'sete', 'oito', 'nove', 'dez', 'onze', 'doze', 'treze', 'catorze', 'quinze', 'dezesseis', 'dezesete', 'dezoito', 'dezenove', 'vinte')

numero = int(input("Me diga um número!"))

permitir = (0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20)

while numero not in permitir:
    print("Você digitou o número errado!")
    numero = int(input("Tente novamente, me diga um número!"))


