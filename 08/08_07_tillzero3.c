#include<stdio.h>

int main(void){
    int wallet = 1000, amount;

    while( wallet > 0 ){
        printf("amount? ");scanf("%d", &amount);

        if ( amount == 0 ){
            printf("取引終了\n");
            break;
        }

        if ( amount < 0 ){
            printf("無効です\n");
            continue;
        }

        wallet -= amount;
        printf("残高: %d\n", wallet);
    }

    return 0;
}