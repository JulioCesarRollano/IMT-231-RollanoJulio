#include <stdio.h>

int main(void) {
   int edad=0;
   printf("Ingrese su edad:");
   scanf("%d", &edad);

   if (edad < 13){
   printf("Infancia\n");
   } else if (edad>=13 && edad <=17) {
     printf("Adolescencia\n");
   } else {
     printf("Adultez\n");
   }

   return 0;
}
