#include<stdio.h>
#include<math.h>

int main(void){
    double x, conv_x;
    int selected;

    printf("x? ");scanf("%lf", &x);
    
    printf("--- menu ---\n");
    printf("1: 絶対値, 2: 二乗, 3: 三乗\n");

    printf("menu no? ");scanf("%d", &selected);

    switch(selected){
    case 1:
        conv_x = fabs(x);
        printf("|%f| = %f\n", x, conv_x);
        break;
    case 2:
        conv_x = pow(x, 2);
        printf("%f ^ 2 = %f\n", x, conv_x);
        break;
    case 3:
        conv_x = pow(x, 3);
        printf("%f ^ 3 = %f\n", x, conv_x);
        break;
    default:
        break;
    }
    return 0;
}