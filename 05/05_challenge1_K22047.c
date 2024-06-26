#include<stdio.h>

int main(void){
    int isOpen[2][7] = {
        {0, 1, 1, 1 ,1, 1, 0},
        {0, 1, 1, 0, 1, 1, 1}
    };
    int dayOfWeek, time;
    printf("曜日? ");scanf("%d", &dayOfWeek);
    printf("時間帯? ");scanf("%d", &time);

    if(isOpen[time][dayOfWeek])
        printf("診察を行っています\n");
    else
        printf("診察は行っていません\n");

    return 0;
}