/*
	时间：2022年5月20日
	天时彩云
	我一生所求决不放弃
*/
#include<stdio.h>
#include<stdlib.h>


/*
	给年份year，定义一个宏，以判别该年份是否闰年。
	提示：宏名可以定义为LEAP_YEAR，形参为y，既定义宏的形式为 #define LEAP_YEAR(y) （读者设计的字符串）
*/
#define LEAP_YEAR(y) (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) ? 1 : 0


int main()
{
	int x, y;
	x = scanf("%d", &y);

	if (LEAP_YEAR(y))
		printf("L");
	else
		printf("N");

	return 0;
}
