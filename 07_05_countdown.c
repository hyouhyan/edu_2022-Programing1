#include<stdio.h>

int main(void){
    int n;
    printf("n? ");scanf("%d", &n);

    for (int i = n; i > 0; i--){
        printf("%d\n", i);
    }

    return 0;
}