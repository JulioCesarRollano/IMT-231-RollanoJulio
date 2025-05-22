def primeros_primos(N):
    contador = 0
    numero = 2

    while contador < N:
        es_primo = True
        for i in range(2, numero):
            if numero % i == 0:
                es_primo = False
                break
        if es_primo:
            print(numero, end=' ')
            contador += 1
        numero += 1
    print()  

    