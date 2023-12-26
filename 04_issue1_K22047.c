#include<stdio.h>

int main(void){
    int height, weight;
    printf("height? ");scanf("%d", &height);
    printf("weight? ");scanf("%d", &weight);

    float bmi = (float)weight / (((float)height / 100) * ((float)height / 100));
    float standardweight = ((float)height - 100) * 0.9;

    printf("standardWeight = %f\n", standardweight);
    printf("BMI = %f\n", bmi);

    return 0;
}