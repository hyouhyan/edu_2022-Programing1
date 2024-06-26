#include<stdio.h>

int main(void){
    int n = 3;
    int human[n][2];

    for(int i = 0; i < n; i++){
        printf("%d人目の身長と体重? ", i + 1);scanf("%d %d", &human[i][0], &human[i][1]);
    }

    for(int i = 0; i < n; i++)
        printf("%d人目の身長と体重は %d %d\n", i + 1, human[i][0], human[i][1]);
    
    return 0;
}