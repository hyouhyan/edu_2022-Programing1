#include<stdio.h>

int main(void){
    char stack[11] = {'\0'}, s[11] = {'\0'};
    int counter = -1;

    printf("入力しやがりなさい!! ");scanf("%s", s);

    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            counter++;
            stack[counter] = s[i];
            //printf("%cをスタックしたよ\n", stack[counter]);
        }

        switch(stack[counter]){
            case '(':
                if(s[i] == ')')
                    counter--;
                break;
            case '[':
                if(s[i] == ']')
                    counter--;
                break;
            case '{':
                if(s[i] == '}')
                    counter--;
                break;
        }
    }

    if(counter == -1)
        printf("OK\n");
    else
        printf("NG\n");

    return 0;
}