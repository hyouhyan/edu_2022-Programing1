#include<stdio.h>

void printFunc(void){
    for(int i = 1; i <= 5; i++)
        printf("%d\n", i);
}

int main(void){
    printFunc();
    return 0;
}