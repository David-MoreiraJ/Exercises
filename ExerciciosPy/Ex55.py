p = 0
m = 0
for c in range(0, 5):
    x = int(input("Quantos quilos você pesa? "))
    if c == 0:
        p = x
        m = x
    else:
        if x > p:
            p =+ x 
        elif x < m:
            m =+ x
print(p)
print(m)


