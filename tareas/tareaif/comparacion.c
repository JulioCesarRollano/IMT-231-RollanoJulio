
#include <stdio.h>

int main(void) {
    int numberA=0;
    int numberB=0;
    printf("ingresen  primer numero\n");
    scanf("%d", &numberA);
    printf("ingresen  segundo numero numero\n");
    scanf(" %d", &numberB);

    if (numberA > numberB){
        printf("EL numero mayor es: %d \n",numberA);
    } else if (numberA =numberB) {
       printf("los numero son iguales\n");
        } else {
        printf("El numero mayor es  %d \n",numberB);
    }

    return 0;
}

