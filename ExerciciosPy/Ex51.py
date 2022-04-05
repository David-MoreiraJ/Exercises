r = int(input("Me diga a razão da sua Progressão aritmética: "))
n = int(input("Me diga o primeiro termo da sua Progressão artmética: "))
x = (n + (10-1) * r)
for c in range(n, x + r, r):
    print(c)

