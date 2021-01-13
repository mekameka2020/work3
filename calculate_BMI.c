/*
 *   Copyright (c) 2021 Hidetoshi Kawano
 *
 *     This software is released under the MIT License.
 *       http://opensource.org/licenses/mit-license.php
 *        */

#include<stdio.h>
#include<math.h>

int main()
{
 int h, w, hm, hm2, BMI;
 printf("あなたの身長を入力してください:");
 scanf("%d",&h);
 hm = h / 100;
 printf("あなたの体重を入力してください:");
 scanf("%d",&w);
 hm2 = hm ^ 2;
 BMI = w / hm2;
 printf("あなたのBMIは%dです。\n", BMI);
 
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
