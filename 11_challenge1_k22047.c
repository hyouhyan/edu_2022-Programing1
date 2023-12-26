#include<stdio.h>

int main(void){
    char paragraph[] =
    "we hold these truths to be self-evident, that all men are created "
    "equal, that they are endowed by their creator with certain unalienable "
    "rights, that among these are life, liberty and the pursuit of "
    "happiness.";
    char searchTerm[13] = {'\0'};
    int index = -1, i = 0, j = 0;

    printf("searchTerm: ");scanf("%s", searchTerm);
    
    //paragraphがNullになるか、indexが-1じゃなくなるまでループ
    for(i = 0; paragraph[i] != '\0' && index == -1; i++){
        //ループ前にindex = i
        index = i;
        while(searchTerm[j] != '\0'){
            //ここで判定、違ってたらindex = -1, jの初期化
            if(paragraph[i] != searchTerm[j]){
                index = -1;
                j = 0;
                break;
            }
            //判定通過後にj++, i++
            i++;
            j++;
        }
    }

    printf("indexOf: %d\n", index);

    return 0;
}