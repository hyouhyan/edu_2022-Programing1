#include<stdio.h>

int main(void){
    char inputText[6] = {'\0'};

    printf("input: ");scanf("%s", inputText);

    for(int i = sizeof(inputText) - 1; i >= 0; i--)
        printf("%c", inputText[i]);
    printf("\n");
    
    return 0;
}