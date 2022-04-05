#questao1
print("Questão 1")

def multiplicação(a, b) :
    total = 0
    cont = 0
    while cont < b:
        total += a
        cont += 1
    return total
print(multiplicação(5,4))
print("""Fim da Questão 1
""")
#questao2
print("Questão 2")
def produtorio(k):
    produtorio = 1
    j = 1
    while j <= k:
        produtorio= produtorio * (1 +1 / j)
        j += 1
    return produtorio / k

print(produtorio(3))

print(produtorio)

print("""Fim da Questão 2
""")
#questao3
print("Questão 3")

def multiplosde4(n, n1):
    total = 0
    while n <= n1:
        if n % 4 == 0:
            print("->{}".format(n), end ="")
            print
            total = total + n
        n += 1
    return total
print(multiplosde4(10,100))
print("""Fim da Questão 3
""")
#Questão4
print("Questão 4")
n = int(input("Quantos termos você quer que sejam exibidos? "))
n1 = 0
n2 = 1
print("{} -> {}".format(n1, n2), end="")
contador = 3
while contador <= n:
    n3 = n1 + n2
    print("-> {}".format(n3), end="")
    n1 = n2
    n2 = n3
    contador += 1
print(" Fim da sua sequência de Fibonacci de {} termos.".format(n))
print("""Fim da questão 4
""")
#questao5
print("Questão 5")
def LogNep (j1):
    soma=0
    j=0
    j1 = j1-1
    while(j < 100 ):
        soma=soma+(((-1)**j)/(j+1))*(j1**(j+1))
        j+=1
    return soma

print (LogNep (0.5))
print("""Fim da questão 5
        """)
#questao6
print("Questão 6")
def SomaDosDig(s):
    result = 0
    while s != 0:
        result = (s - (s // 10)* 10) + result
        s = s // 10
    return result
print(SomaDosDig(155))
print("""Fim da questão 6
        """)
#questao7
print("Questão 7")

def nperfeito(n):
    k = 1
    add = 0
    while k < n:
        if n % k == 0:
            add = add + k
        k = k + 1
    if add == n:
        return (add == n)
    else:
        return False
print(("{} é um número perfeito? (true or false)?").format(n), end="") 
print(nperfeito(111))
print(""" Fim da questão 7
""")
    
#questao8
print("Questão 8")
n = int(input(" Defina o número o qual você deseja descobrir o fatorial "))
fatorial = 1
while n > 0 :
    fatorial = fatorial * n
    n = n-1
print(" Este é o resultado de seu fatorial: {}.".format(fatorial))
print("""Fim da questão 8
""")
#questao9
print("Questão 9")
n = 7
i = 2
contador = 0
print("True para primo, false para não Primo")
while i < n:
    if n % i == 0 :
        contador = 1
        print("False")
    i = i + 1
if contador == 0:
    print("True")
print("""Fim da questão 9
""")
#questao10
print("Questão 10")
def parabin(b):
    return parabin(b / 2) + [b % 2] if b > 1 else [b]
resultado = list(map(int, parabin(40)))
print(resultado)

    
print("Fim da questão 10")
