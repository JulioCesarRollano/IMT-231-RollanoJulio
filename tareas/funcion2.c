// funcion2.c
#include "funcion2.h"

InfoNumero contar_digitos(int numero) {
    InfoNumero info;
    info.numero = numero;
    info.cantidad_digitos = 0;

    if (numero == 0) {
        info.cantidad_digitos = 1;
    } else {
        while (numero != 0) {
            numero /= 10;
            info.cantidad_digitos++;
        }
    }

    return info;
}





