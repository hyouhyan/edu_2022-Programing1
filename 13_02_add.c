#include<stdio.h>

void addOf(int a, int b){
    int result = a + b;
    printf("%d + %d = %d\n", a, b, result);
}

int main(void){
    int a = 5, b = 10;
    addOf(a, b);

    return 0;
}