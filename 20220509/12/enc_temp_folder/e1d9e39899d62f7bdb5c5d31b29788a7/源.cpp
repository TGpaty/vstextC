/*
	时间：2022年5月12日
	作者：天时彩玉
	热烈的爱的宣言，铭记于心的约定。
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


/*
	写一个判断素数的函数，在主函数输入一个整数，输出是否是素数的消息。
*/
//void isss(int a);
//
//
//int main()
//{
//	int a, x;
//
//	x = scanf("%d", &a);
//	if (x != 1)
//	{
//		printf("输入错误\n");
//		exit(11);
//	}
//
//	isss(a);
//
//	return EXIT_SUCCESS;
//}
//
//
//void isss(int a)
//{
//	int i = 2;
//	while (i < sqrt(a))
//	{
//		if (a % i == 0)
//			break;
//		i++;
//	}
//	if (i < sqrt(a))
//		printf("not prime");
//	else
//		printf("prime");
//
//}


/*
	写一个函数，使给定的一个二维数组（３×３）转置，即行列互换。
*/
//void aT(int(*a)[3]);
//
//
//int main()
//{
//	int a[3][3], i, j;
//
//	aT(a);
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", a[j][i]);
//		}
//		putchar('\n');
//	}
//
//	return EXIT_SUCCESS;
//}
//
//
//void aT(int(*a)[3])
//{
//	int i, j;
//
//	int x;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			x = scanf("%d", &a[i][j]);
//			if (x != 1)
//			{
//				printf("输入错误\n");
//				exit(11);
//			}
//		}
//	}
//}


/*
	写一函数，使输入的一个字符串按反序存放，在主函数中输入并输出反序后的字符串（不包含空格）。
*/
void fund(char *s);


int main()
{
	char* s = NULL;

	int x;
	x = scanf("%s", s);
	if (x != 1)
	{
		printf("输入错误\n");
		exit(11);
	}

	fund(s);

	printf("%s\n", s);

	return EXIT_SUCCESS;
}


void fund(char* s)
{
	int n = strlen(s);
	while (n >= 0)
	{
		printf("%c", s[n]);
		n--;
	}
}
