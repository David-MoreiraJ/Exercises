palavras = ('palavras', 'programar', 'linguagem')
for p in palavras:
    print(f'Na palavra {p} temos ')
    for letra in p:
        if letra in 'aeiou':
            print(letra, end='')

