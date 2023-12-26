#include<stdio.h>

int main(void){
    int num = 3, value = 2;
    int human[num][value];

    for(int i = 0; i < num; i++){
        printf("%d人目の身長と体重? ", i + 1);scanf("%d %d", &human[i][0], &human[i][1]);
    }

    for(int i = 0; i < num; i++){
        printf("%d人目の身長と体重は", i + 1);
        for(int j = 0; j < value; j++)
            printf(" %d", human[i][j]);
        printf("\n");
    }

    return 0;
}