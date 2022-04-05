distância = float(input("Qual a distância do trajeto?"))
print("Sua viagem será de {}Km...".format(distância))
if distância <= 199:
    preço = distância * 0.50
else:
    preço = distância * 0.45

print("E o preço da sua passagem é {}".format(preço))
