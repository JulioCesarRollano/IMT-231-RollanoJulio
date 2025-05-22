def contar(N):
    contador = 0
    num=0
    for i in range(1,N+1,1):
        if i % 3 ==0 or i % 10==3:
             contador+= 1
    return contador