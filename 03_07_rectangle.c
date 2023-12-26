#include<stdio.h>

int main(void){
    int a, b, perimeter, area;

    printf("a b? ");scanf("%d %d", &a, &b);

    printf("perimeter = %d\n", (a+b)*2);
    printf("area = %d\n", a*b);

    return 0;
}