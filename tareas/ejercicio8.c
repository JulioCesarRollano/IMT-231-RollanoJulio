#include <stdio.h>
#include "funcion.h" 

int main(){
  int num;
  while(1){
   printf("Escribe un numero positivo:");
   scanf("%d", &num);
    if (num <= 0){
    break;
    }
    printf("El factorial de %d es: %d\n", num, factorial(num));
  }
  printf("Programa finalizado.\n"); 
return 0;
}
