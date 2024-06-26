#include<stdio.h>

int main(void){
    int n = 5;
    int a[n], x, y, temp;

    for(int i = 0; i < n; i++)
        a[i] = i + 1;

    printf("何番目を入れ替えますか? ");scanf("%d %d", &x, &y);

    x--;
    y--;

    temp = a[x];
    a[x] = a[y];
    a[y] = temp;

    for(int i = 0; i < n; i++)
        printf("a[%d]=%d\n", i, a[i]);    

    return 0;
}