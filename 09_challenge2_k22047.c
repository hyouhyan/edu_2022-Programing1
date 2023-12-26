#include<stdio.h>

int main(void){
    char ch;
    int isMinus = 0, answer = 0, inputNumber = 0;
    printf("equation? ");

    while((ch = getchar()) != '='){
        switch(ch){
            case ' ':
                if(isMinus)
                    answer -= inputNumber;
                else
                    answer += inputNumber;
                inputNumber = 0;
                break;
            case '+':
                isMinus = 0;
                break;
            case '-':
                isMinus = 1;
                break;
            default:
                inputNumber = inputNumber * 10 + (int)ch - 48;
                break;
        }
    }
    printf("answer: %d\n", answer);
    return 0;
}