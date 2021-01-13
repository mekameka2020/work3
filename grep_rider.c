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
 int y;
 printf("知りたい平成ライダーの放送開始年を入力してください:");
 scanf("%d",&y);

 switch (y) {
	 case 2000:
	printf("クウガ\n");
	break;
	 case 2001:
	printf("アギト\n");
	break;
	 case 2002:
	printf("龍騎\n");
	break;
	 case 2003:
	printf("ファイズ\n");
	break;
	 case 2004:
	printf("剣(ブレイド)\n");
	break;
	 case 2005:
	printf("響鬼\n");
	break;
	 case 2006:
	printf("カブト\n");
	break;
	 case 2007:
	printf("電王\n");
	break;
	 case 2008:
	printf("キバ\n");
	break;
	 case 2009:
	printf("ディケイド\n");
	break;
	 case 2010:
	printf("Ｗ\n");
	break;
	 case 2011:
	printf("オーズ\n");
	break;
	 case 2012:
	printf("フォーゼ\n");
	break;
	 case 2013:
	printf("ウィザード\n");
	break;
	 case 2014:
	printf("鎧武\n");
	break;
	 case 2015:
	printf("ドライブ\n");
	break;
	 case 2016:
	printf("ゴースト\n");
	break;
	 case 2017:
	printf("エグゼイド\n");
	break;
	 case 2018:
	printf("ビルド\n");
	break;
	 case 2019:
	printf("ジオウ\n");
	break;
 }

 return 0;
}
