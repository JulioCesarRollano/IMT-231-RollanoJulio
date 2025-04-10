#include <stdio.h>

int main() {
    int num;
    int suma=0;

    printf("Ingresa un numero:\n");
    scanf("%d", &num);
    for (int i = 1 ; i <= num; i++) {
        suma += i;
    }
     printf("La suma de todos los %d numeros N es :%d\n",num,suma);

    return 0;
}
