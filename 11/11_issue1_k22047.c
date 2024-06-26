#include<stdio.h>

int main(void){
    char inputText[21] = {'\0'};
    int isPalindrome = 1, count = 0;

    printf("input(20文字以下): ");scanf("%s", inputText);

    while(inputText[count] != '\0')
        count++;
    
    for(int i = 0; i < count; i++)
        if(inputText[i] != inputText[count - i - 1])
            isPalindrome = 0;
    
    if(isPalindrome)
        printf("回文OK\n");
    else
        printf("回文NG\n");
    
    return 0;
}