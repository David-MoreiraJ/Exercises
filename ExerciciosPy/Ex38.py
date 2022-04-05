A = int(input("Me dê o primeiro número!"))
B = int(input("Me dê o segundo número!"))

if A > B:
    print("{} é maior que {}".format(A, B))
elif B > A:
    print("{} é maior que {}".format(B, A))
else:
    print("Seus números são iguais!")
