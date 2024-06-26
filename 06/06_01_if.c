#include<stdio.h>

int main(void){
    int a;
    printf("a? ");scanf("%d", &a);

    if (a<0)
        printf("aは負の値です");
    else if(a>0)
        printf("aは正の値です");
    else
        printf("aは0です");
    
    printf("\n");

    return 0;
}