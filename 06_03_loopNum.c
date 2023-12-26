#include<stdio.h>

int main(void){
    int n;
    printf("n? ");scanf("%d", &n);

    for (int i = 0; i < n; i++)
        printf("Hello, World!\n");

    return 0;

}