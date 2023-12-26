#include<stdio.h>
#include<math.h>

int main(void){
    double theta, rad;

    printf("input: ");scanf("%lf", &theta);

    rad = theta * 2 * M_PI / 360;
    rad = sin(rad);

    printf("sin (%f) = %f\n", theta, rad);

    return 0;
}