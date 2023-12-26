#include<stdio.h>

int main(void){
    char string[11] = {'\0'};

    printf("入力(10文字以内): ");scanf("%s", string);

    printf("%s\n", string);

    return 0;
}