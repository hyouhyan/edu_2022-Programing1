#include<stdio.h>

int main(void){
    int a=6, b=4 ,c=2, d;
    d = a - (b / c);

    printf("%d - (%d / %d) = %d\n", a, b, c, d);

    return 0;
}