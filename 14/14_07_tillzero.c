#include<stdio.h>

int main(void){
    int wallet = 1000, amount;
    while(1){
        printf("amount? ");scanf("%d", &amount);

        wallet -= amount;

        if(amount == 0){
            printf("取引終了\n");
            break;
        }
        printf("残高: %d\n", wallet);
    }

    return 0;
}