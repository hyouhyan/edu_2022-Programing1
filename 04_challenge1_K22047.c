#include<stdio.h>

int main(void){
    int x, reverse = 0;
    printf("x? ");scanf("%d", &x);

    reverse += (x % 10) * 100;
    x /= 10;
    reverse += (x % 10) * 10;
    x /= 10;
    reverse += (x % 10);

    printf("reverse x = %d\n", reverse);
}