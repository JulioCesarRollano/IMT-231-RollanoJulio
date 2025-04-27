#include <stdio.h>
#include "funcion.h"
int main(){
   int num1;
   int num2;
   while(1){
       printf("ingrese el primer numero:");
       scanf("%d", &num1);
       printf("ingrese el segundo numero:");
       scanf("%d", &num2);
    if (num1 == 0 && num2==0){
        break;
     }
     verificarnum(num1, num2);
   }
   printf("Fin del programa");
  return 0;
}
