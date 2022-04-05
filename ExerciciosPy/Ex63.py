n = int(input("Me diga um número! "))
t1 = 0
t2 = 1
cont = 0
while n != cont:
    t1 = t1 + t2
    print(t1)
    cont += 1
    t2 = t2 + t1
    print(t2)
    cont += 1
