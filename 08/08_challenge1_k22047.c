#include<stdio.h>

int main(void){
    int input;
    printf("input? ");scanf("%d", &input);

    int remain, i;

    while(1){
        remain = 1;
        i = 1;

        
        while(remain != 0){
            i++;
            remain = input % i;
        }

        input /= i;

        if(input == 1){
            printf("%d\n", i);
            break;
        }
        else
            printf("%d, ", i);
    }

    return 0;
}