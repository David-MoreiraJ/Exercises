Preço = float(input("Qual o preço da casa que você quer comprar?"))
Salário = float(input("Qual o seu salário?"))
Anos = float(input("Em quantos anos você pretende pagar?"))
Prestação = Preço / (12 * Anos)

if Prestação >= Salário * 30 / 100:
    print("Nada de empréstimo para você.")
else:
    print("Aqui está seu empréstimo!")
