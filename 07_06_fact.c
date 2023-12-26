#include<stdio.h>

int main(void){
    int x, n;
    printf("x n? ");scanf("%d %d", &x, &n);

    int base_x = x;

    for (int i = 1; i < n; i++){
        x *= base_x;
    }

    printf("%d^%d = %d\n", base_x, n, x);

    return 0;
}