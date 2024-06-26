#include<stdio.h>

int bigger(int a, int b){
    if(a > b)
        return a;
    else
        return b;
}

int main(void){
    int a, b, big;
    printf("a b? ");scanf("%d %d", &a, &b);

    big = bigger(a, b);
    printf("大きい方の値は %d\n", big);

    return 0;
}