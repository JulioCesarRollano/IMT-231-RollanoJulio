def contar(N):
    numero=0
    for i in range (1,N+1,+1):
        if (i % 3==0):
            numero+=1
    print("Los numeros entre 1 y N son:",numero,"")            