#include<stdio.h>

int main(void){
    int n = 3;
    int h[n];
    double average = 0;

    for(int i = 0; i < n; i++){
        printf("%d人目の身長は? ", i + 1);scanf("%d", &h[i]);
        average += h[i];
    }

    average /= n;
    printf("平均身長は %f\n", average);

    return 0;
}