#Exercício 1

def conta_letras(string):
    seu_dict = dict()
    for x in string: 
        if x not in seu_dict:
            seu_dict[x]= 1
        else:
            seu_dict[x] += 1
    return seu_dict

print("Seu conta letras está Iniciando!")
print(conta_letras('otorrinolaringologista'))
print("Fim do conta Letras!")
print("""
""")

##########################################

#Exercício 2

def dicionario_notas():
    notas = {}
    while True:
        aluno = input("Me diga o nome do aluno. (Para encerrar o Loop, digite: sair )")
        if aluno =="sair":
            return notas
        if  aluno in notas:
            x = input(" O nome desse aluno já está na lista, você deseja usar esse nome mesmo assim? (Opções: sim / não)")
            if x == 'sim':
                notas[aluno] = input("Me diga a nota do Aluno.")
            elif x == 'não':
                input("Me diga o nome do aluno. (Para encerrar o Loop, digite: sair )")

        else:
            notas[aluno] = input("Me diga a nota do Aluno.")

print("Seus alunos e notas são:")
print(dicionario_notas())
print("Fim do dicionário de notas!")


