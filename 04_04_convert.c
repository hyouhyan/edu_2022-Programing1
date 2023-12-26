#include <stdio.h>

int main(void){
    int nx, ny;
    double dx, dy;
    printf("nx ny? ");scanf("%d %d", &nx, &ny);

    dx = (double)nx;
    dy = (double)ny;

    printf("nx/ny = %d\n", nx / ny);
    printf("dx/ny = %f\n", dx / ny);
    printf("nx/dy = %f\n", nx / dy);

    return 0;
}