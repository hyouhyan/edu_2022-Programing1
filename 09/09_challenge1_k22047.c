#include<stdio.h>

int main(void){
    char ch;
    int isMinus = 0, answer = 0, inputNumber;

    printf("equation? ");

    while((ch = getchar()) != '='){
        switch(ch){
            case ' ':
                break;
            case '-':
                isMinus = 1;      
                break;
            case '+':
                isMinus = 0;
                break;
            default:
                if(isMinus)
                    answer -= (int)ch - 48;
                else
                    answer += (int)ch - 48;

        }
        
    }
    printf("answer: %d\n", answer);
    return 0;
}