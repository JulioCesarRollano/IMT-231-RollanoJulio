#include <stdio.h>
#include  "funcion.h"
int main(){
   int num1 = 0;
   int suma=0;
   while (1){
   printf("ingrese un numero :");
   scanf("%d", &num1);
   if (num1 < 0){
    printf("Programa Finalizado");
    printf("La %dsuma es \n",suma);
   break;
   } else if (num1>0){
      suma+=num1;
    }
   }
}


