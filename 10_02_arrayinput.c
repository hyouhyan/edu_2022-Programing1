#include<stdio.h>

int main(void){
    int n = 5;
    int heights[n];
    double sum = 0;

    for(int i = 0; i < n; i++){
        printf("%d人目の身長? ", i + 1);scanf("%d", &heights[i]);
        sum += heights[i];
    }
    printf("平均身長 = %f\n", sum / n);

    return 0;
}