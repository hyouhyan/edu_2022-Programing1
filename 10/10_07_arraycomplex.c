#include<stdio.h>
#include<math.h>

int main(void){
    int n = 5;
    int heights[n], weights[n], THRESHOLD = 23;
    double standardWeight[n], bmi[n];

    for(int i = 0; i < n; i++){
        printf("%d人目の身長と体重? ", i + 1);scanf("%d %d", &heights[i], &weights[i]);
        bmi[i] = weights[i] / pow(heights[i] / 100.0, 2.0);
        standardWeight[i] = (heights[i] - 100) * 0.9;
    }

    printf("--- しきい値を超えた人 ---\n");

    for(int i = 0; i < n; i++)
        if(bmi[i] > THRESHOLD)
            printf("%d人目のBMI: %f, 標準体重との差: %f\n", i + 1, bmi[i], weights[i] - standardWeight[i]);

    return 0;
}