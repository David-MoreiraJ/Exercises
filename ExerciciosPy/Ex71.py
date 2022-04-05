n = 0
seleção =''
cinquenta = 50
vinte = 20
dez = 10
um = 1
count50 = count20 = count10 = count1 = 0

while True:
    n = int(input("Me diga o valor a ser sacado! "))
    if n >= 50:
        count50 += (n / 50)
        n -= count50 * 50
    if n >= 20:
        count20 += (n / 20)
        n-= count20 * 20
    if n >= 10:
        count10 += (n / 10)
        n-= count10 * 10
    if n >= 1:
        count1 += (n / 1)
        n-= count1 * 1
    seleção = str(input("Deseja sacar novamente:"))
    if seleção == 'N':
        break
print(f"""notas de 50 = {count50}
        notas de 20 = {count20}
        notas de 10 = {count10}
        notas de 1 = {count1}""")


    
