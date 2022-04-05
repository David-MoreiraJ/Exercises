x = int(input("Qual número que você deseja descobrir se é primo? "))
n = 1
for c in range(n, 20):
    n = n + 1
    if x % n != 0:
        print("Seu número é primo")
    else:
        print("Seu número não é primo")

