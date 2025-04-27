#include <stdio.h>
#include "funcion.h"
int invertir(int num){
   int numinvertido =0;
   while (num>0){ 
    int digito = num %10;
    numinvertido= numinvertido*10 + digito;
    num /=10;
  }
  return numinvertido;
}
