from operaciones.__Init__ import contar, mostrar,secuencia
while True:
    print("-----MENU DE OPCIONES----")
    print("1. Contar cuántos números entre 1 y N son divisibles por 3")
    print("2. Imprimir una piramide de asteriscos de altura N.")
    print("3. Dado un número N, mostrar la secuencia de los primeros N términos " \
    "de la serie: 1, -2, 3, -4, 5, -6, ")
    print("4. Mostrar la cantidad de números primos entre 1 y N.")
    print("5. Verificar si un número es palíndromo (número capicúa).")
    print("6.Salir del programa.  ")
    opcion =int(input("Seleccione una opciion: "))
    if opcion == 6:
        print("Saliste del programa ")
        break
    elif opcion == 1:
        N=int(input("Ingrese un numero:"))
        resultado=contar(N)
        print("Los numeros entre 1 y N son:",resultado,"")
    elif opcion == 2:
        N=int(input("Ingrese un numero:"))  
        mostrar(N)  
    elif opcion == 3:
        N=int(input("Ingrese un numero:")) 
        secuencia(N) 
        
    elif opcion == 4:
        N=int(input("Ingrese un numero:"))  
        
    elif opcion == 5:
        N=int(input("Ingrese un numero:"))  
                  
    else:
        print("Opcion no valida")
        