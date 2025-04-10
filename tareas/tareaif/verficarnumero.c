#include <stdio.h>

int main(void) {
    int numberA=0;;
    printf("ingresen  primer numero\n");
    scanf("%d", &numberA);

    if (numberA > 0) {
    printf("EL numero es positivo: %d \n",numberA);
    } else if (numberA < 0) {
       printf("EL numero es negativo: %d \n",numberA);
    } else {
     printf("EL numero es ceroo: %d \n",numberA);
    }
}

