#include<stdio.h>

int main(void){
    int m;

    printf("要素数 ");
    scanf("%d", &m);

    int num[m];

    printf("入力 ");
    for(int i = 0; i < m - 1; i++){
        scanf("%d ", &num[i]);
    }
    scanf("%d",& num[m - 1]);
    
    for(int i = 0; i < m; i++){
        printf("%d個目: %d\n", i + 1, num[i]);
    }

    return 0;
}

