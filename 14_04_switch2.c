#include<stdio.h>

int main(void){
    printf("c? ");
    char c = getchar();

    switch(c){
        case 'L':
            printf("Left\n");
            break;
        case 'R':
            printf("Right\n");
            break;
        default:
            printf("nop\n");
            break;
    }
    return 0;
}