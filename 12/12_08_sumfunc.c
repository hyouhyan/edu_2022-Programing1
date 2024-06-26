#include<stdio.h>

int sum(int a){
    int sum = 0;
    for(int i = 1; i <= a; i++)
        sum += i;
    return sum;
}

int main(void){
    int n;
    printf("n? ");scanf("%d", &n);

    printf("1から%dまでの和は %d\n", n, sum(n));

    return 0;

}