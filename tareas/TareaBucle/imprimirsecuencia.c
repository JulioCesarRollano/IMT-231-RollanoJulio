#include <stdio.h>

int main(){
    int num;
    int i;
    printf("ingrese un numero entero:");
    scanf("%d", &num);
   i = 1;
    while (i <= num) {
     printf("%d\n", i);
     i++;
  }
   return 0;
 }
