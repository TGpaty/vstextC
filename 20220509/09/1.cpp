#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
求以下三数的和,保留2位小数 1~a之和 1~b的平方和 1~c的倒数和
*/

//int main()
//{
//	float a, b, c;
//	float s1 = 0, s2 = 0, s3 = 0;
//	int i, j, k;
//
//	int x;
//	x = scanf("%f%f%f", &a, &b, &c);
//	if (x != 3)
//	{
//		printf("输入错误\n");
//		exit(0);
//	}
//	
//	for (i = 1, j = 1, k = 1; i <= a || j <= b || k <= c;)
//	{
//		if (i <= a)
//		{
//			s1 = s1 + i;
//			i++;
//		}
//		if (j <= b)
//		{
//			s2 = s2 + pow(j, 2);
//			j++;
//		}
//		if (k <= c)
//		{
//			s2 = s2 + 1.0 / k;
//			k++;
//		}
//	}
//
//	printf("%.2f\n", s1 + s2 + s3);
//
//	return EXIT_SUCCESS;
//}


/*
打印出所有"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该本身。 
例如：153是一个水仙花数，因为153=1^3+5^3+3^3。 
*/

//int main()
//{
//	for (int i = 100; i <= 999; i++)
//	{
//		if (i == (int)(pow(i % 10, 3) + pow(i / 10 % 10, 3) + pow(i / 100 % 10, 3)))
//		{
//			printf("%d\n", i);
//		}
//	}
//	return EXIT_SUCCESS;
//}


/*
一个数如果恰好等于不包含它本身所有因子之和，这个数就称为"完数"。 
例如，6的因子为1、2、3，而6=1+2+3，因此6是"完数"。 
编程序找出N之内的所有完数，并按下面格式输出其因子
*/

int main()
{
	// i外部循环 j内部循环 k计算完数因子的计数器
	int n, i = 2, j = 1, k = 1;
	// 因子和
	int yzh;

	int x;
	x = scanf("%d", &n);
	if (x != 1)
	{
		printf("输入错误\n");
		exit(0);
	}
	
	while (i < n)
	{

		yzh = 0;
		j = 1;

		while (j < i)
		{
			if (i % j == 0)
				yzh += j;
			j++;
		}

		if (yzh == i)
		{
			printf("%d its factors are", i);
			k = 1;
			while (k < i)
			{
				if (i % k == 0)
					printf(" %d", k);
				k++;
			}
			putchar('\n');
		}
			

		i++;
	}

	return EXIT_SUCCESS;
}
