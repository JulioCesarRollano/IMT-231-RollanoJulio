def primos(N):
    contador = 0
    for num in range(2,N+1):
        divisores= 0
        for i in range(1,num+1):
            if num % i == 0:
                divisores+= 1
        if divisores ==2:
            contador+=1
    print(f"El total de numeros primos son: {contador}")
