from funciones import suma_divisores,primeros_primos
while True:
    print("-----MENU DE FUNCIONES----")
    print("1.Calcular la suma de todos los divisores de un número " \
    "N (excluyendo el propio numero)")
    print("2. Generar un triangulo de caracteres con letras del alfabeto hasta una altura N")
    print("3.  Mostrar los primeros N números primos.")
    print("4. Generar la secuencia de los primeros N términos de la serie de Fibonacci" \
    "inversa.")
    print("5. Salir del programa.")
    opcion = int(input("Seleccione una opcion:"))
    if opcion == 5:
        print("Saliste del programa..")
    elif opcion == 1:
        N= int(input("Ingrese un numero positivo:")) 
        resultado = suma_divisores(N)
        print("La suma es:", resultado)
    elif opcion == 2:
        N= int(input("Ingrese un numero positivo:")) 
    elif opcion == 3:
        N= int(input("Ingrese un numero positivo:")) 
        primeros_primos(N)
         