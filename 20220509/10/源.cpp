/*
	时间：2022年5月10日
	作者：天时彩云
	为了未来和初恋女友
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>


/*
	有一分数序列： 2/1 3/2 5/3 8/5 13/8 21/13......
	求出这个数列的前N项之和，保留两位小数。
*/
//int main()
//{
//	int n, i;
//	float upnum = 2, downnum = 1, sum = 0, t;
//
//	int x;
//	x = scanf("%d", &n);
//	if (x != 1)
//	{
//		printf("输入错误\n");
//		exit(11);
//	}
//
//	i = 1;
//	while (i <= n)
//	{
//		sum = sum + upnum / downnum;
//		t = downnum;
//		downnum = upnum;
//		upnum = upnum + t;
//		i++;
//	}
//
//	printf("%.2f\n", sum);
//
//	return EXIT_SUCCESS;
//}


/*
	一球从M米高度自由下落，每次落地后返回原高度的一半，再落下。 
	它在第N次落地时反弹多高？共经过多少米？ 保留两位小数
*/
//int main()
//{
//	float m, n, sum = 0.0;
//	int i = 1;
//
//	int x;
//	x = scanf("%f%f", &m, &n);
//	if (x != 2 || m <=0 || n <= 0)
//	{
//		printf("输入错误\n");
//		exit(0);
//	}
//
//	while (i <= n)
//	{
//		sum += m;
//		m = m / 2.0;
//		sum += m;
//		i++;
//	}
//	// 第n此弹起未落下
//	sum = sum - m;
//
//	printf("%.2f %.2f\n", m, sum);
//
//	return EXIT_SUCCESS;
//}


/*
	猴子吃桃问题。猴子第一天摘下若干个桃子，当即吃了一半，
	还不过瘾，又多吃了一个。 第二天早上又将剩下的桃子吃掉一半，
	又多吃一个。以后每天早上都吃了前一天剩下的一半零一个。 
	到第N天早上想再吃时，见只剩下一个桃子了。求第一天共摘多少桃子。
*/
//int main()
//{
//	int n, i = 2, sum = 1;
//
//	int x;
//	x = scanf("%d", &n);
//	if (x != 1)
//	{
//		printf("输入错误\n");
//		exit(0);
//	}
//
//	while (i <= n)
//	{
//		sum = (sum + 1) * 2;
//		i++;
//	}
//
//	printf("%d\n", sum);
//
//	return EXIT_SUCCESS;
//}


/*
	用迭代法求 平方根
	公式：求a的平方根的迭代公式为： 
	X[n+1]=(X[n]+a/X[n])/2    ,X[1]=a/2 
	要求前后两次求出的差的绝对值少于0.00001。 
	输出保留3位小数
*/
//int main()
//{
//	float a, x1, x2;
//
//	int x;
//	x = scanf("%f", &a);
//	if (x != 1)
//	{
//		printf("输入错误\n");
//		exit(0);
//	}
//	
//	x1 = a / 2.0;
//	x2 = (x1 + a / x1) / 2;
//	while (fabs(x1 - x2) >= 0.00001)
//	{
//		x1 = x2;
//		x2 = (x1 + a / x1) / 2;
//	}
//
//	printf("%.3f\n", x2);
//
//	return EXIT_SUCCESS;
//}


/*
	用简单素数筛选法求N以内的素数。
*/
//int main()
//{
//	int n, i = 2, j = 2;
//	float x;
//
//	int y;
//	y = scanf("%d", &n);
//	if (y != 1)
//	{
//		printf("输入错误\n");
//		exit(0);
//	}
//
//	while (i <= n)
//	{
//		while (j < (x = sqrt(i)))
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//			j++;
//		}
//		if (j > x)
//		{
//			printf("%d\n", i);
//		}
//		j = 2;
//
//		i++;
//	}
//
//	return EXIT_SUCCESS;
//}


/*
	用选择法对10个整数从小到大排序。
*/
int main()
{
	int nums[10] = {0};
	int i, j, min, temp, x;

	for (i = 0; i < 10; i++)
	{
		x = scanf("%d", &nums[i]);
		if (x != 1)
		{
			printf("输入错误\n");
			exit(11);
		}
	}

	for (i = 0; i < 10; i++)
	{
		min = i;
		for (j = i; j < 10; j++)
		{
			if (nums[j] < nums[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			temp = nums[i];
			nums[i] = nums[min];
			nums[min] = temp;
		}
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", nums[i]);
	}

	return EXIT_SUCCESS;
}
