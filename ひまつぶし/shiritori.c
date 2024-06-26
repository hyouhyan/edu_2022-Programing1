#include<stdio.h>

int main(void){
    int n, ng_num = 0;
    scanf("%d", &n);
    char c_start = '\0', c_end = '\0', tmp;

    for(int i = 0; i < n; i++){
        c_start = getchar();
        if(c_end != '\0' && c_end != c_start){
            ng_num++;
        }
        while((tmp = getchar()) != '\n'){
           c_end = tmp;
        }
    }

    if(ng_num == 0)
        printf("OK\n");
    else
        printf("NG\n");

    return 0;
}