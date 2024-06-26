#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/ioctl.h>
#define LINE_N (2)

int main(void){
    //ターミナルのサイズ取得用
    struct winsize ws;
    ioctl( STDOUT_FILENO, TIOCGWINSZ, &ws);
    //何線
    char line_name[LINE_N][100] = {"リニモ", "地下鉄東山線"};
    //駅名
    char station_name[LINE_N][100][100] = {
        {"藤が丘", "はなみずき通", "杁ヶ池公園", "長久手古戦場", "芸大通", "公園西", "愛地球博記念公園", "陶磁資料館南", "八草"},
        {"高畑", "八田", "岩塚", "中村公園", "中村日赤", "本陣", "亀島", "名古屋", "伏見", "栄", "新栄町", "千種", "今池", "池下", "覚王山", "本山", "東山公園", "星ヶ丘", "一社", "上社", "本郷", "藤が丘"}
    };
    //各駅ごとの所要時間
    int station_time[LINE_N][100] = {
        {0, 3, 5, 7, 9, 11, 13, 15, 17},
        {0, 1, 3, 5, 7, 9, 10, 13, 16, 18, 20, 22, 24, 26, 28, 30, 31, 34, 36, 38, 39, 41}
    };
    //駅の数
    int station_n[] = {9, 22};

    //fromの取得
    int i = 0, from_line_num, from_st_num;

    printf("--- from ---\n");
    for(i = 0; i < LINE_N - 1; i++)
        printf("%d: %s, ", i + 1, line_name[i]);
    printf("%d: %s\n", i + 1, line_name[i]);
    printf("出発路線(番号)を選んでください ");scanf("%d", &from_line_num);

    from_line_num--;

    printf("--- from ---\n");
    for(i = 0; i < station_n[from_line_num] - 1; i++)
        printf("%d: %s, ", i + 1, station_name[from_line_num][i]);
    printf("%d: %s\n", i + 1, station_name[from_line_num][i]);
    printf("出発駅(番号)を選んでください ");scanf("%d", &from_st_num);

    from_st_num--;

    printf("\n");

    //toの取得
    int to_line_num, to_st_num;

    printf("--- to ---\n");
    for(i = 0; i < LINE_N - 1; i++)
        printf("%d: %s, ", i + 1, line_name[i]);
    printf("%d: %s\n", i + 1, line_name[i]);
    printf("目的路線(番号)を選んでください ");scanf("%d", &to_line_num);

    to_line_num--;

    printf("--- to ---\n");
    for(i = 0; i < station_n[to_line_num] - 1; i++)
        printf("%d: %s, ", i + 1, station_name[to_line_num][i]);
    printf("%d: %s\n", i + 1, station_name[to_line_num][i]);
    printf("目的駅(番号)を選んでください ");scanf("%d", &to_st_num);

    to_st_num--;

    printf("\n");

    //確認
    char y_or_n;
    printf("%s %s から %s %s の経路でよろしいですか? [Y/n] ", line_name[from_line_num], station_name[from_line_num][from_st_num], line_name[to_line_num], station_name[to_line_num][to_st_num]);
    y_or_n = getchar();
    while(y_or_n == '\n')
        y_or_n = getchar();
    switch(y_or_n){
        case 'Y':
        case 'y':
            printf("確定しました\n");
            break;
        case 'N':
        case 'n':
            printf("キャンセルしました\n");
            break;
        default:
            printf("認識できない文字%cです。キャンセルしました。\n", y_or_n);
            break;
    }

    //clearコマンドの動作
    //ターミナルの表示内容をすっからかんにする
    for(i = 0; i < ws.ws_row; i++)
        printf("\n");
     printf("「%s %s」から「%s %s」の乗り換え案内です\n", line_name[from_line_num], station_name[from_line_num][from_st_num], line_name[to_line_num], station_name[to_line_num][to_st_num]);
    printf("\n");

    //所要時間
    int required_time = 0;
    if(from_line_num == to_line_num){
        required_time = abs(station_time[from_line_num][from_st_num] - station_time[to_line_num][to_st_num]);
        printf("乗り換えは必要ありません\n");
    }else {
        //乗り換えポイントの数
        int cross_point_n = 0;
        int cross_point[2] = {-1};
        for(i = 0; i < station_n[from_line_num]; i++){
            for(int j = 0; j < station_n[to_line_num]; j++){
                if(strcmp(station_name[from_line_num][i], station_name[to_line_num][j]) == 0){
                    cross_point_n++;
                    cross_point[0] = i;
                    cross_point[1] = j;
                    //強制終了
                    i = station_n[from_line_num];
                    j = station_n[to_line_num];
                    printf("%s で乗り換えが必要になります\n", station_name[from_line_num][cross_point[0]]);
                }
            }
        }
        if(cross_point[0] == -1){
            printf("路線が交わっていません\n");
            printf("使用時間がわかりませんでした\n");
            return 0;
        }
    
        //printf("乗り換えポイント%d個\n", cross_point_n);

        //from側乗り換えまでの時間
        required_time = abs(station_time[from_line_num][from_st_num] - station_time[from_line_num][cross_point[0]]);
        //乗り換えに要する時間(定数)
        required_time += 5;
        //to側乗り換え後の時間
        required_time += abs(station_time[to_line_num][cross_point[1]] - station_time[to_line_num][to_st_num]);
    }

    printf("全体の所要時間は%d分です\n", required_time);
    printf("\n※ ダイヤの乱れ等により実際の所要時間は変動する可能性があります\n");

    return 0;
}

/*
現状の課題
・対応路線が少ない
・路線を増やした時→複数回の乗り換えに対応
・乗り換えにかかる時間(移動時間)が定数

今後の展開
・現在時刻を取得して到着時間を計算する
  → 実際のダイヤを取得する必要がある
・出発地点、目的地を駅以外の場所(愛工大とか)でも動くようにする
  → 出発地、到着地の座標を取得するプログラム、駅の座標を取得するプログラムが必要

どちらもAPIを利用すれば簡単だが、それはつまらない
*/