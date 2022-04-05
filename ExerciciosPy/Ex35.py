A = int(input("Qual o primeiro lado do seu triângulo?"))
B = int(input("Qual o segundo lado do seu triângulo?"))
C = int(input("Qual o terceiro lado do seu triângulo?"))

if A <= B + C and B <= A + C and C <= B + A:
    print("Seu triângulo existe!")
else:
    print("Seu triângulo é uma mentira!")
