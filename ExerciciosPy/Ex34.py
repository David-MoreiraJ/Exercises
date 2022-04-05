Salário = float(input("Quanto você ganha?"))

if Salário <= 1250.00:
    Aumento = Salário * (10 / 100)
else:
    Aumento = Salário * (15 / 100)

print("Seu salário agora será {}".format(Salário + Aumento))
