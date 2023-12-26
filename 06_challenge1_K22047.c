#include<stdio.h>

int main(void){
    int n, isPrimeNumber = 0;
    printf("n? ");scanf("%d", &n);

    if ( n < 1)
        isPrimeNumber = -1;

    for ( int i = 2; i < n; i++)
        if (n % i == 0)
            isPrimeNumber ++;
    
    if (isPrimeNumber)
        printf("素数ではありません\n");
    else
        printf("素数です\n");
    
    return 0;
}