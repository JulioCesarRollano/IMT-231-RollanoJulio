#include <stdio.h>
  int main (){
     int num;
     int contador= 0;
     while(1){
         printf("Ingrese un numero por favor: ");
         scanf("%d", &num);
         if (num == -1){
          break;
         }
        if (num % 3 ==0){
            contador ++;
        }
    }
   printf("El total de múltiplos de 3 ingresados: %d\n", contador);

   return 0;
}
