#include<stdio.h>

int main(void){
    int w, h;
    printf("h w? ");scanf("%d %d", &h, &w);

    for( int i = 0; i < h; i++ ){
        for( int j = 0; j < w; j++ ){
            putchar('#');
        }
        putchar('\n');
    }
    return 0;
}