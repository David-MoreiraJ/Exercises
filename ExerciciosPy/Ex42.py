A = int(input("Me diga o primeiro lado do triângulo."))
B = int(input("Me diga o segundo lado do triângulo."))
C = int(input("Me diga o terceiro lado do triângulo."))

if A <= B + C and B <= A + C and C <= B + A:
    print("Seu triângulo existe!")
    if A == B == C:
        print("Seu triângulo é equilátero.")
    elif A == B or A == C or B == C:
        print("Seu triângulo é isóceles.")
    else:
        print("Seu triângulo é escaleno.")
else:
    print("Seu triângulo é uma mentira!")
