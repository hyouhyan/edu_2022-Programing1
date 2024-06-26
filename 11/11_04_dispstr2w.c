#include<stdio.h>

int main(void){
    char inputText[11] = {'\0'}, output;
    int i = 0;

    printf("入力(10文字以内): ");scanf("%s", inputText);

    while(inputText[i] != '\0'){
        putchar(inputText[i]);
        i++;
    }
    printf("\n");
    return 0;
}