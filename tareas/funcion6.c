#include <stdio.h>
#include "funcion.h"
 
void verificarnum(int num1, int num2){
   if (num1 > num2){
    printf("El primer numero(%d)  es mayor.\n",num1);
  } else if (num1 < num2){
      printf("El segundo numero (%d) es mayor.\n",num2);
  } else {
     printf("Ambos numeros son iguales.\n");
  }
}
