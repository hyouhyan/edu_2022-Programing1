#include <stdio.h>

int main(void){
    int h1, h2, h3;
    double average;

    printf("No.1? ");scanf("%d", &h1);
    printf("No.2? ");scanf("%d", &h2);
    printf("No.3? ");scanf("%d", &h3);  

    average = ((double)h1 + (double)h2 + (double)h3)/3;
    printf("average = %f\n", average);

    return 0;  
}