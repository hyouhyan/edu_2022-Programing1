#include<stdio.h>

int main(void){
    int bank = 1000, wallet = 1000, amount;

    while ( wallet > 0 && bank > 0 ){
        printf("amount? ");scanf("%d", &amount);
        bank -= amount;
        wallet += amount;

        if ( amount == 0 ){
            printf("取引終了\n");
            break;
        }
        printf("銀行: %d 財布: %d\n", bank, wallet);
    }
    
}