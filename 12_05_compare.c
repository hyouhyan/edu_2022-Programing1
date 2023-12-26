#include<stdio.h>

int main(void){
    int a, b, bigger;
    printf("a b? ");scanf("%d %d", &a, &b);

    if(a > b)
        bigger = a;
    else
        bigger = b;
    
    printf("大きい方の値は %d\n", bigger);

    return 0;
}