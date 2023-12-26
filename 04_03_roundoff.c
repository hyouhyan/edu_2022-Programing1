#include <stdio.h>

int main(void){
    double dx;
    int nx;

    printf("dx? ");scanf("%lf", &dx);
    printf("dx/2 = %f\n",dx/2);

    nx = (int)dx;
    printf("nx = %d\n", nx);
    printf("nx/2 = %d\n", nx/2);

    return 0;
}