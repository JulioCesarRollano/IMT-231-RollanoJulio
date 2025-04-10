#include <stdio.h>

int main() {
    int x;
    printf("ingre un numero:");
    scanf("%d", &x);

    for (int i = 1; i <= 10; i++) {
        printf("%d* %d =%d\n ",x,i , x*i);
    }
    return 0;
}
