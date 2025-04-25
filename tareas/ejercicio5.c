#include <stdio.h>
#include  "funcion.h"
int main(){
  int opcion =0;
  int num1;
  int num2;

 while(1){
  printf("\n----MENÚ------- \n");
  printf("1. Sumar dos números\n");
  printf("2. Restar dos números\n");
   printf("3. Multiplicar dos números\n");
   printf("4. Salir\n");
   printf("Seleccione una opción: ");
   scanf("%d", &opcion);

   switch(opcion){
        case 1:
         printf("Ingrese el primer número: ");
         scanf("%d", &num1);
         printf("Ingrese el segundo número: ");
         scanf("%d", &num2);
         printf("Resultado: %d\n", sumar(num1, num2));
         break;
        case 2:
          printf("Ingrese el primer número: ");
          scanf("%d", &num1);
          printf("Ingrese el segundo número: ");
          scanf("%d", &num2);
          printf("Resultado: %d\n", restar(num1, num2));
          break;
        case 3:
          printf("Ingrese el primer número: ");
          scanf("%d", &num1);
          printf("Ingrese el segundo número: ");
          scanf("%d", &num2);
          printf("Resultado: %d\n", multiplicar(num1, num2));
          break;
        case 4:
         printf("Saliste del programa ");
         return 0;
         default:
          printf("Opcion invalida.Intente un numero del menu por favor\n ");


     }
   }
return 0;
}
