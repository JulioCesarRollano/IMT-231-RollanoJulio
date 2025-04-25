// funcion.h
#ifndef FUNCION_H
#define FUNCION_H

// Estructura para almacenar el número y la cantidad de dígitos
typedef struct {
    int numero;
    int cantidad_digitos;
} InfoNumero;

// Declaración de la función
InfoNumero contar_digitos(int numero);

#endif

