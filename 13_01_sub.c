#include<stdio.h>

int sumOf(int a, int b){
    int result = a - b;
    return result;
}

int main(void){
    int a = 5, b = 10;
    int sum = sumOf(a, b);

    printf("%d - %d = %d\n", a, b, sum);

    return 0;
}