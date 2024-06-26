#include<stdio.h>

int main(void){
    char ch;
    printf("text? ");

    while((ch = getchar()) != '\n'){
        switch(ch){
            case ' ':
                printf("\n");
                break;
            default:
                printf("%c", ch);
                break;
        }
    }
    printf("\n");
    return 0;
}