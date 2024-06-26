#include<stdio.h>

int main(void){
    int n;
    printf("n? ");scanf("%d", &n);

    while( 0 <= n ){
        printf("%d\n", n);
        n--;
    }

    return 0;
}