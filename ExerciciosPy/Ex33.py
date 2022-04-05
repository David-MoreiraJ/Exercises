A = int(input("Me dê seu primeiro número!"))
B = int(input("Me dê seu segundo número!"))
C = int(input("Me dê seu terceiro número!"))

if A >= B and A >= C:
    print("{} é o maior número".format(A))
elif B >= A and B >= C:
    print("{} é o maior número".format(B))
elif C >= A and C >= B:
    print("{} é o maior número".format(C))

if A <= B and A <= C:
    print("{} é o menor número".format(A))
elif B <= A and B <= C:
    print("{} é o menor número".format(B))
elif C <= A and C <= B:
    print("{} é o menor número".format(C))
