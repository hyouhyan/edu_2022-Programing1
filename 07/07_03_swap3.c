#include<stdio.h>

int main(void){
    int x, y, z, temp;

    printf("x y z? ");scanf("%d %d %d", &x, &y, &z);

    while (x > y || y > z){
        if(x > y){
            temp = x;
            x = y;
            y = temp;
        }

        if(y > z){
            temp = y;
           y = z;
          z = temp;
        }
    }

    printf("%d %d %d\n", x, y, z);
    return 0;
}