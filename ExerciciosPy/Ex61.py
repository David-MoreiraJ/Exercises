r = int(input("Me diga a razão da sua PA! "))
n = int(input("Me diga o primeiro termo da sua PA! "))
t = 10
x = (n + (t - 1) * r)
while n < x:
    n = n + r
    print(n)
    
