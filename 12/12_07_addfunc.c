#include<stdio.h>

int add(int a, int b){
    return a + b;
}

int main(void){
    int a, b;
    printf("a b? ");scanf("%d %d", &a, &b);

    printf("和は %d\n", add(a, b));

    return 0;
}