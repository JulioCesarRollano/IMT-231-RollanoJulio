#include<stdio.h>
#include "funcion.h"
int main(void){
    int num;
   while (1){
   printf("ingrese un numero: ");
   scanf("%d", &num);
     if (num==-1){
       printf("Programa finalizado.");
       break;
     }
     if (parImpar(num)){
       printf("\n Es Par\n");
     }else {
      printf("\nES IMPAR\n");
     }
   }
   return 0;
}

