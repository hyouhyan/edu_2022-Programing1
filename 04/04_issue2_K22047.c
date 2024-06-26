#include<stdio.h>

int main(void){
    int x;
    printf("x? ");scanf("%d", &x);

    if (x % 2)
        printf("odd\n");
    else
        printf("even\n");

    return 0;
}