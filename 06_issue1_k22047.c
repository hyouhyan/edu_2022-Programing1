#include<stdio.h>

int main(void){
    int n, height;
    double sum = 0;

    printf("人数? ");scanf("%d", &n);
    for ( int i = 0; i < n; i++){
        printf("%d人目の身長は? ", i + 1);scanf("%d", &height);
        sum += height;
    }
    sum /= n;
    printf("平均身長: %f\n", sum);

    return 0;
}