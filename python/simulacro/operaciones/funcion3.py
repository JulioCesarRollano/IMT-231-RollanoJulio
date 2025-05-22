def secuencia(N):
    i=1
    contador=0
    resultado=""
    while contador<N:
        if i%2==0:
            resultado+=str(-i) + " ,"

        else:
            resultado+= str(i) + " , "
        i+=1
        contador+=1        
    print(f"{resultado}")    


