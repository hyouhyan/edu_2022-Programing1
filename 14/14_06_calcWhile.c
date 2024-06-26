#include<stdio.h>

int main(void){
    int n, i = 0, sum = 0;
    printf("n? ");scanf("%d", &n);

    while(i < n){
        i++;
        sum += i;
    }
    printf("1から%dまでの和は %d\n", n, sum);

    return 0;
}