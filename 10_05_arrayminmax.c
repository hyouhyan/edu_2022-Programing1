#include<stdio.h>

int main(void){
    int n = 5;
    int heights[n], max = 0, min = 9999;

    for(int i = 0; i < n; i++){
        printf("%d人目の身長? ", i + 1);scanf("%d", &heights[i]);
        if (min > heights[i])
            min = heights[i];
        if (max < heights[i])
            max = heights[i];
    }

    printf("最大身長は %d\n最小身長は %d\n", max, min);

    return 0;
}