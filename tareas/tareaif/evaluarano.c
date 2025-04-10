#include <stdio.h>

int main(void) {
    int ano=0;
    printf("Ingrese un año\n");
    scanf("%d", &ano);

    if ((ano % 4 ==0 && ano % 100 !=0)||(ano % 400 ==0)){
      printf("El año %d es bisiesto\n",ano);
   } else {
     printf("El  año %d no es bisisesto.\n",ano);
  }
  return 0;
} 
