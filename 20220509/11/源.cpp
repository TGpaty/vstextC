/*
	ʱ�䣺2022��5��11��
	���ߣ���ʱ����
	Ϊ�����룬���Ŭ�����������µ�Լ��֮���һһʵ�֡�
	�����Լ��Ĵ����������Լ������ܣ��ı��Լ��������������£�
	��һ
		����֮�£��Ǻ��ǻ��������������������޹أ�����ܰ�֡�
	�ڶ�
		�Լ����£��Ǻ��ǻ��������������������޹أ�˭Ҳ�ܲ��ˡ�
	�¶����Ҳ���һ�����磬����������Ҫ̤���֣��һ�������һ������ʹ����ں޵��С�
	����˵���Ƿ��ӣ����Ҿ���������粡�ˣ��ҿ�����ߵ�һ�ж�����ġ�
	��������ˣ���ҲҪ֤��������һ�����ǵķ��ӣ������Ƿ�ķ��ӡ�
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


/*
	��һ��3��3����Խ���Ԫ��֮�͡�
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
//				printf("�������\n");
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
	����һ���������źõ�9��Ԫ�ص����飬
	������һ����Ҫ��ԭ������Ĺ��ɽ������������С�
*/
//int main()
//{
//	int a[10] = { 0 }, i = 0, t;
//	// ����9���������
//	int x;
//	while (i < 9)
//	{
//		x = scanf("%d", &a[i]);
//		if (x != 1)
//		{
//			printf("�������\n");
//			exit(11);
//		}
//
//		i++;
//	}
//	// ����������
//	x = scanf("%d", &a[9]);
//	if (x != 1)
//	{
//		printf("�������\n");
//		exit(11);
//	}
//	// �õ�������������С��
//	for (i = 0; i < 9; i++)
//	{
//		if (a[i] > a[9])
//			break;
//	}
//	// ����
//	for (int j = 8; j >= i; j--)
//	{
//		t = a[j + 1];
//		a[j + 1] = a[j];
//		a[j] = t;
//	}
//	//���
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", a[i]);
//	}
//
//	return EXIT_SUCCESS;
//}


/*
	����10�����֣�Ȼ�����������
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
//			printf("�������\n");
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
	д�����������ֱ����������������Լ������С��������
	�����������������������������������������ɼ������롣
*/
////��С������
//int fun1(int a, int b);
////���Լ��
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
//		printf("�������\n");
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
	�󷽳� �ĸ��������������ֱ���b^2-4ac����0������0����С��0ʱ�ĸ�������������
	������������a��b��c��ֵ��
*/
//// ������
//void fun1(float a, float b, float c);
//// С����
//void fun2(float a, float b, float c);
//// ������
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
//		printf("�������\n");
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
