#include<stdio.h>

int main(void){
    int n, point, credit, totalcredit = 0;
    double gpa = 0;
    printf("科目数?");scanf("%d", &n);
    for (int i = 0; i < n; i++){
        printf("科目%dの点数?", i + 1);scanf("%d", &point);
        printf("科目%dの単位数?", i + 1);scanf("%d", &credit);

        if (point < 60)
            point = 0;
        else if (point < 70)
            point = 1;
        else if (point < 80)
            point = 2;
        else if (point < 90)
            point = 3;
        else
            point = 4;

        gpa += point * credit;
        totalcredit += credit;
    }
    gpa /= totalcredit;
    printf("GPAは%fです\n", gpa);

    return 0;
}