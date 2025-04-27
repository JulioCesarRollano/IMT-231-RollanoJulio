#include <stdio.h>
#include "funcion2.h"

int main() {
    int numero;

    while (1) {
        printf("Ingrese un número entero positivo (0 para salir): ");
        scanf("%d", &numero);

        if (numero == 0) {
            printf("Programa finalizado.\n");
            break;
        }

        InfoNumero resultado = contar_digitos(numero);

        printf("El número %d tiene %d dígito(s).\n", resultado.numero, resultado.cantidad_digitos);
    }

    return 0;
}
