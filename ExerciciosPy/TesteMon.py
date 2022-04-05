def Nep(x):
    soma = 0
    n = 0
    x = x - 1
    while (n < 100):
        soma + (((-1)**n)/(n+1))*(x**(n + 1))
        n+=1
    return soma

print(Nep(0.5))
