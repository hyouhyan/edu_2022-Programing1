#include<stdio.h>

int main(void){
    int primeNumber[100] = {0}, n = 0, isPrimeNumber = 1;
    primeNumber[0] = 2;

    for(int i = 2; i <= 100; i++){
        isPrimeNumber = 1;
        for(int j = 0; j <= n; j++)
            if(i % primeNumber[j] == 0){
//                printf("%d %% %d を計算したら割り切れちゃいました\n", i, primeNumber[j]);
                isPrimeNumber = 0;
                break;
            }
        if(isPrimeNumber){
            primeNumber[n + 1] = i;
            n++;
        }
    }
            
    for(int i = 0; i < n; i++)
        printf("%d, ", primeNumber[i]);

    printf("%d,\n", primeNumber[n]);

    return 0;
}