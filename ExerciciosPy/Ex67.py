n = 0
r = 0
t = 1
while True:
    n = int(input('Quer ver a tabuada de qual valor? '))
    if n < 0:
        break
    t = 0
    while t < 11:

        r = n * t
        print(f'{n} X {t} = {r}')
        t += 1
print('Tabuada encerrada!')



