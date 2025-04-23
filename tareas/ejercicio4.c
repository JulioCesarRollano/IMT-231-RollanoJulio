#include <stdio.h>
#include  "funcion.h"
int main(){
   int num1 = 0;
   int suma=0;
   while (1){
   printf("ingrese un numero por favor:");
   scanf("%d", &num1);
   if (num1 < 0){
    printf("Programa Finalizado...");
    printf("La suma es %d\n",suma);
   break;
   } else if (num1>0){
      suma+=num1;
    }
   }
}


