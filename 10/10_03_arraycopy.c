#include<stdio.h>

int main(void){
    int n = 5;
    int heightsCm[n];
    double heightsMeter[n];

    for(int i = 0; i < n; i ++){
        printf("%d人目の身長(cm)? ", i + 1);scanf("%d", &heightsCm[i]);
    }

    printf("--- Convert Meter ---\n");

    for(int i = 0; i < n; i ++)
        heightsMeter[i] = (float)heightsCm[i] / 100;
    
    for(int i = 0; i < n; i ++)
        printf("%d人目の身長: %f m\n", i + 1, heightsMeter[i]);

    return 0;
}