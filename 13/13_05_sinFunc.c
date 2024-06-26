#include<stdio.h>
#include<math.h>

double deg2Rad(double);

int main(void){
    double theta, rad;
    printf("input: ");scanf("%lf", &theta);

    rad = deg2Rad(theta);

    printf("sin (%f) = %f\n", theta, sin(rad));

    return 0;
}

double deg2Rad(double theta){
    double rad = theta * 2 * M_PI / 360;
    return rad;
}