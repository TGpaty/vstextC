/*
	时间：2022年5月11日
	作者：天时彩云
	为了梦想，坚持努力，我曾许下的约定之后会一一实现。
	认清自己的脆弱，认清自己的无能，改变自己，谨陈其事如下：
	第一
		他人之事，是好是坏，是生是死，都与我无关，不会管半分。
	第二
		自己的事，是好是坏，是生是死，与他人无关，谁也管不了。
	孤独与我才是一个世界，若是有人想要踏入半分，我会让他的一生活在痛苦与悔恨当中。
	他们说我是疯子，可我觉着这个世界病了，我看到身边的一切都会恶心。
	但即便如此，我也要证明，我是一个理智的疯子，而不是疯的疯子。
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


/*
	求一个3×3矩阵对角线元素之和。
*/
//int main()
//{
//	int cj[3][3] = {0};
//	int i, j, x;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			x = scanf("%d", &cj[i][j]);
//			if (x != 1)
//			{
//				printf("输入错误\n");
//				exit(11);
//			}
//		}
//	}
//
//	printf("%d %d\n", cj[0][0] + cj[1][1] + cj[2][2], cj[0][2] + cj[1][1] + cj[2][0]);
//
//	return EXIT_SUCCESS;
//}


/*
	已有一个已正序排好的9个元素的数组，
	今输入一个数要求按原来排序的规律将它插入数组中。
*/
//int main()
//{
//	int a[10] = { 0 }, i = 0, t;
//	// 输入9个有序的数
//	int x;
//	while (i < 9)
//	{
//		x = scanf("%d", &a[i]);
//		if (x != 1)
//		{
//			printf("输入错误\n");
//			exit(11);
//		}
//
//		i++;
//	}
//	// 输入插入的数
//	x = scanf("%d", &a[9]);
//	if (x != 1)
//	{
//		printf("输入错误\n");
//		exit(11);
//	}
//	// 拿到大于输入输最小数
//	for (i = 0; i < 9; i++)
//	{
//		if (a[i] > a[9])
//			break;
//	}
//	// 插入
//	for (int j = 8; j >= i; j--)
//	{
//		t = a[j + 1];
//		a[j + 1] = a[j];
//		a[j] = t;
//	}
//	//输出
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", a[i]);
//	}
//
//	return EXIT_SUCCESS;
//}


/*
	输入10个数字，然后逆序输出。
*/
//int main()
//{
//	int a[10], i = 0;
//
//	int x;
//	while (i < 10)
//	{
//		x = scanf("%d", &a[i]);
//		if (x != 1)
//		{
//			printf("输入错误\n");
//			exit(11);
//		}
//
//		i++;
//	}
//
//	while (i > 0)
//	{
//		i--;
//
//		printf("%d ", a[i]);
//	}
//	putchar('\n');
//
//	return EXIT_SUCCESS;
//}


/*
	写两个函数，分别求两个整数的最大公约数和最小公倍数，
	用主函数调用这两个函数，并输出结果两个整数由键盘输入。
*/
////最小公倍数
//int fun1(int a, int b);
////最大公约数
//int fun2(int a, int b);
//
//
//int main()
//{
//	int a, b;
//
//	int x;
//	x = scanf("%d%d", &a, &b);
//	if (x != 2)
//	{
//		printf("输入错误\n");
//		exit(11);
//	}
//
//	printf("%d %d", fun2(a, b), fun1(a, b));
//
//	return EXIT_SUCCESS;
//}
//
//
//int fun1(int a, int b)
//{
//
//	return a * b / fun2(a, b);
//}
//
//
//int fun2(int a, int b)
//{
//	int i = 1, k = 1;
//	if (a < b)
//	{
//		while (i < a)
//		{
//			if (a % i == 0 && b % i == 0)
//				k = i;
//			i++;
//		}
//	}
//	else
//	{
//		while (i < b)
//		{
//			if (a % i == 0 && b % i == 0)
//				k = i;
//			i++;
//		}
//	}
//
//	return k;
//}


/*
	求方程 的根，用三个函数分别求当b^2-4ac大于0、等于0、和小于0时的根，并输出结果。
	从主函数输入a、b、c的值。
*/
//// 大于零
//void fun1(float a, float b, float c);
//// 小于零
//void fun2(float a, float b, float c);
//// 等于零
//void fun3(float a, float b, float c);
//
//
//int main()
//{
//	float a, b, c;
//
//	int x;
//	x = scanf("%f%f%f", &a, &b, &c);
//	if (x != 3)
//	{
//		printf("输入错误\n");
//		exit(11);
//	}
//
//	if (pow(b, 2) - 4 * a * c > 0)
//	{
//		fun1(a, b, c);
//	}
//	else if (pow(b, 2) - 4 * a * c < 0)
//	{
//		fun2(a, b, c);
//	}
//	else
//	{
//		fun3(a, b, c);
//	}
//
//	return EXIT_SUCCESS;
//}
//
//
//void fun1(float a, float b, float c)
//{
//
//	printf("x1 = %.3f x2 = %.3f\n", 
//		(-1 * b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a), 
//		(-1 * b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a));
//
//}
//
//
//void fun2(float a, float b, float c)
//{
//
//	printf("x1=%.3f+%.3fi x2=%.3f-%.3fi\n", 
//		(-1 * b) / (2 * a), sqrt(fabs(pow(b, 2) - 4 * a * c)) / (2 * a), 
//		(-1 * b) / (2 * a), sqrt(fabs(pow(b, 2) - 4 * a * c)) / (2 * a));
//
//}
//
//
//void fun3(float a, float b, float c)
//{
//
//	printf("x = %.3f\n", (-1 * b) / (2 * a));
//
//}
