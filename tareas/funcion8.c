#include <stdio.h>
#include "funcion.h" 

int factorial(int num){
   int resultado = 1;
    int i=1;
    while( i<=num){
     resultado= resultado * i;
     i++;
   }
  return resultado;
}
