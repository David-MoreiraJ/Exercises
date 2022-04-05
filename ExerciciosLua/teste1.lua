-- Programa que calcula o fatorial de um dado número
function fact (n)
    if n <= 0 then
        return 1
    else
        return n * fact(n - 1)
    end
end

print("Entre com um numero:")
a = io.read("*number") -- Lê o número
print(fact(a))
