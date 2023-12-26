#include<stdio.h>

int main(void){
    int total, legs, crane, tortoise = 0;
    printf("total? ");scanf("%d", &total);
    printf("legs? ");scanf("%d", &legs);

    for (crane = 0; 1; crane ++){
        tortoise = total - crane;

        if(crane * 2 + tortoise * 4 == legs && crane + tortoise == total){
            printf("crane = %d, tortoise = %d\n", crane, tortoise);
            break;
        }
        else if(crane > total){
            printf("cannot be combined\n");
            break;
        }
    }

    return 0;
}