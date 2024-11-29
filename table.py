# Pide al usuario el número a multiplicar
num = int(input("Dime el numero a multiplicar: "))

# Pide al usuario el límite de la tabla
limite = int(input("Dime hasta qué número quieres multiplicar: "))

# Imprime la tabla de multiplicar hasta el límite especificado
for i in range(1, limite + 1):
    print(f"{num} x {i} = {num * i}")
