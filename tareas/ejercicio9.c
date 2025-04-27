#include <stdio.h>
#include "funcion.h"
int main(){
 while(1){
  int num= 0;
   printf("Ingrese un numero entero:");
   scanf("%d",&num);
   if (num>=0 && num <10){
   printf("El numero tiene un solo digito\n");
   printf("Programa a  finalizado.\n");
   break;
  } else {
    int invertido = invertir(num);
    printf("El numero invertido es : %d \n", invertido);
  }
 }
 return 0;
}
