AnoNasc = int(input("Em qual ano você nasceu?"))
ano = 2021
TempAlist = AnoNasc + 18
Idade = ano - AnoNasc
if Idade == 18:
    print("Chegou sua hora de se alistar, você tem {}".format(Idade))
elif Idade > 18:
    print(
        "Já passou da hora de você se alistar, você tem {} e deveria ter se alistado em {}".format(
            Idade, TempAlist
        )
    )
elif Idade < 18:
    print(
        "Ainda falta um tempo para você se alistar, você tem {} e deverá se alistar em {}".format(
            Idade, TempAlist
        )
    )
