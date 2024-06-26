#include <stdio.h>
#include <string.h>

int LINES_N = 1;
char LINES[LINES_N][100] = {"リニモ"};

int STATION_N[LINES_N] = {9};
char STATION_NAMES[LINES_N][STATION_N][100] = {{"藤が丘", "はなみずき通", "杁ヶ池公園", "長久手古戦場", "芸大通", "公園西", "愛地球博記念公園", "陶磁資料館南", "八草"}};
int STATION_TIMES[LINES_N][STATION_N] = {{0, 3, 5, 7, 9, 11, 13, 15, 17}};

void chooseFromStation(int* line, int* station);

int main(void){
    int from[2];
    chooseFromStation(&from[0], &from[1]);
    printf("出発: %sの%s駅", LINES[from[0]], STATION_NAMES[from[1]]);

    return 0;
}

void chooseFromStation(int* line, int* station){
    int from_line, from_station;
    int i;

    printf("--- menu ---\n");
    for(i = 0; i < LINES_N - 1; i++)
        printf("%d: %s, ", i + 1,LINES[i]);
    printf("%d: %s\n", i + 1, LINES[i]);
    printf("出発路線を選んでください ");scanf("%d", &from_line);

    switch(from_line){
        case 1:
            printf("--- menu ---\n");
            for(i = 0; i < STATION_N[from_line] - 1; i++)
                printf("%d: %s, ", i + 1, STATION_NAMES[from_line][i]);
            printf("%d: %s\n", i + 1, STATION_NAMES[from_line][i]);
            printf("出発駅を選んでください ");scanf("%d", &from_station);
            from_station--;
            break;

        default:
            printf("規格外の数字です\n");
            from_station = -1;
            break;
    }
    from_line--;
    *line = from_line;
    *station = from_station;
}

