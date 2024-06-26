#include<stdio.h>

int main(void){
    int x, y, temp;

    printf("x y? ");scanf("%d %d", &x, &y);
    temp = y;
    y = x;
    x = temp;

    printf("%d %d\n", x, y);

    return 0;
}