#include<stdio.h>
#include <limits.h>

int main(void){
    int x, max = INT_MIN;

    for( int i = 0; i < 5; i++ ){
        printf("%d? ", i + 1);scanf("%d", &x);
        if( x > max )
            max = x;
    }
    printf("max = %d\n", max);

    return 0;
}