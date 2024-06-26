#include<stdio.h>

int factOf(int a){
    int sum = 1;
    for(int i = 1; i <= a; i++)
        sum *= i;
    
    return sum;
}

int main(void){
    int n;
    printf("n? ");scanf("%d", &n);

    printf("%dの階乗は %d\n", n, factOf(n));
    return 0;
}