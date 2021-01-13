/*
 *   Copyright (c) 2021 Hidetoshi Kawano
 *
 *     This software is released under the MIT License.
 *     http://opensource.org/licenses/mit-license.php
 *        */

#include<stdio.h>
#include<math.h>

int main()
{
    //変数の宣言
    int    h, w, hm, hm2, BMI;
    
    //身長の入力要求
    printf("あなたの身長を入力してください:");
    scanf("%d", &h);
    
    //身長cmのm換算
    hm = h / 100;
    
    //体重の入力要求
    printf("あなたの体重を入力してください:");
    scanf("%d", &w);
    
    //BMI計算
    hm2 = hm ^ 2;
    BMI = w / hm2;
    
    //BMI表示
    printf("あなたのBMIは%dです。\n", BMI);
	
    //BMIレベルの分類
    if (BMI < 18.5)
	printf("あなたは『低体重』です。\n");
    else if (18.5 <= BMI < 25)
	printf("あなたは『普通体重』です。\n");
    else if (25 <= BMI < 30)
	printf("あなたは『肥満(１度)』です。\n");
    else if (30 <= BMI < 35)
	printf("あなたは『肥満(２度)』です。\n");
    else if(35 <= BMI < 40)
	printf("あなたは『肥満(３度)』です。\n");
    else if(40 <= BMI)
	printf("あなたは『肥満(４度)』です。\n");

    return 0;
}
