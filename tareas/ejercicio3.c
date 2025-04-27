#include <stdio.h>

typedef enum {
    ROJO,
    VERDE,
    AMARILLO
} semaforo;

int main() {
    semaforo color = ROJO;  
    int ciclos = 0;  

    while (ciclos < 10) {
        
        switch (color) {
            case ROJO:
                printf("Color ROJO\n");
                color = VERDE;  
                break;
            case VERDE:
                printf("Color VERDE\n");
                color = AMARILLO;  
                break;
            case AMARILLO:
                printf("Color AMARILLO\n");
                color = ROJO;  
                break;
        }

        
        ciclos++;
        printf("Fin del ciclo %d\n", ciclos);
    }

    printf("PROGRAMA FINALIZADO.\n");
    return 0;
}

