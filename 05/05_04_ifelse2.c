#include<stdio.h>

int main(void){
    int a, b;
    printf("a? ");scanf("%d", &a);
    printf("b? ");scanf("%d", &b);
    
    if ( a >= b)
        printf("a は b 以上です\n");
    else
        printf("a は b 未満です\n");
    
    return 0;
}