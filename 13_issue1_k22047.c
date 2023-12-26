#include<stdio.h>
#include <math.h>

double calcArea(double);
double calcCircumference(double);

int main(void){
    double r;
    printf("input r: ");scanf("%lf", &r);

    printf("%f %f\n", calcArea(r), calcCircumference(r));

    return 0;
}

double calcArea(double r){
    double s;
    s = M_PI * r * r;

    return s;
}

double calcCircumference(double r){
    double l;
    l = 2 * M_PI * r;

    return l;
}