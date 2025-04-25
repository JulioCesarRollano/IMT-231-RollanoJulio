#include <stdio.h>

typedef enum {
    ROJO,
    VERDE,
    AMARILLO
} semaforo;

int main() {
    semaforo color = ROJO;  // Inicializamos el semáforo en ROJO
    int ciclos = 0;  // Contador de ciclos

    while (ciclos < 10) {
        // Cambiar el color según el estado actual
        switch (color) {
            case ROJO:
                printf("Color ROJO\n");
                color = VERDE;  // Cambiamos el estado a VERDE
                break;
            case VERDE:
                printf("Color VERDE\n");
                color = AMARILLO;  // Cambiamos el estado a AMARILLO
                break;
            case AMARILLO:
                printf("Color AMARILLO\n");
                color = ROJO;  // Cambiamos el estado a ROJO
                break;
        }

        // Incrementamos el contador de ciclos
        ciclos++;
        printf("Fin del ciclo %d\n", ciclos);
    }

    printf("PROGRAMA FINALIZADO.\n");
    return 0;
}

