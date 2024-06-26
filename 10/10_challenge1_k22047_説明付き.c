#include<stdio.h>

int main(void){
    //primeNumber: 素数入る配列。要素数は100で指定
    int primeNumber[100] = {0};

    //n: 素数の数。今はまだ素数が一個もないから n = 0 ※わかる人へ、ポインタ的な使い方です
    int n = 0;

    //isPrimeNumber: 素数かどうかの判定用です。 1 = True, 0 = False
    int isPrimeNumber;
    
    //素数の始まりは2
    primeNumber[0] = 2;

    //2 ~ 100までのループ "i"
    for(int i = 2; i <= 100; i++){
        //判定をとりあえずTrueにしとく
        isPrimeNumber = 1;
        //"i"が素数で割り切れるかのループ。0 ~ 素数の数"n" まで繰り返す
        for(int j = 0; j <= n; j++)
            //割り切れちゃった時の処理
            if(i % primeNumber[j] == 0){
                //判定をFalseにする
                isPrimeNumber = 0;
                //これ以上計算しても無駄だからbreakでループを強制終了
                break;
            }
        //もし素数だったら(一回も割り切れてなかったら)
        if(isPrimeNumber != 0){
            //素数の数"n"の一個後に追加する
            primeNumber[n + 1] = i;
            //素数の数を一個増やす
            n++;
        }
    }

    //表示するためのループ   
    for(int i = 0; i < n; i++)
        printf("%d, ", primeNumber[i]);

    //最後に改行
    printf("%d,\n", primeNumber[n]);

    return 0;
}