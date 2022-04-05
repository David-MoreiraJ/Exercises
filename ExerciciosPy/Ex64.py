n = 0
cont = 0
t1 = 0
t2 = 0
while n != 999:
    n = n * 0
    n += int(input("Me diga um número! "))
    cont += 1
    t1 += n 

cont -= 1
print(t1)
print(cont)
