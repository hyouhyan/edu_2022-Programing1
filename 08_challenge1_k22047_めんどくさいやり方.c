#include<stdio.h>

int main(void){
    int input, prime = 2;
    int primeloop = 1, remain = 1;
    printf("input? ");scanf("%d", &input);

    while (input != 1){
        while (remain){
            remain = input % prime;

            while(primeloop){
                //真偽値の初期化
                primeloop = 0;

                //primeを1増加
                prime ++;

                //primeが素数か確認
                for (int i = 2; i < prime; i++){
                    //2からprime - 1 までの全ての値で割る
                    //割り切れる値が1つでも有ったらprimeloop ++でprimeを増加させる
                    if (prime % i == 0)
                        primeloop ++;
                }
            }
        }
        //primeの値を記録する
    
        input /= prime;
    }

    return 0;
}