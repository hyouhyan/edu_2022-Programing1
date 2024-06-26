#include<stdio.h>

int main(void){
    int input[5] = {0}, i;
    
    for(i = 0; i < 5; i++){
        printf("input[%d]? ", i);
        scanf("%d", &input[i]);
    }
    printf("---reverse---\n");
    for(i = 4; i >= 0; i--){
        printf("input[%d]: %d\n", i, input[i]);
    }

    return 0;
}