/*
	ʱ�䣺2022��5��10��
	���ߣ���ʱ����
	Ϊ��δ���ͳ���Ů��
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>


/*
	��һ�������У� 2/1 3/2 5/3 8/5 13/8 21/13......
	���������е�ǰN��֮�ͣ�������λС����
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
//		printf("�������\n");
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
	һ���M�׸߶��������䣬ÿ����غ󷵻�ԭ�߶ȵ�һ�룬�����¡� 
	���ڵ�N�����ʱ������ߣ������������ף� ������λС��
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
//		printf("�������\n");
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
//	// ��n�˵���δ����
//	sum = sum - m;
//
//	printf("%.2f %.2f\n", m, sum);
//
//	return EXIT_SUCCESS;
//}


/*
	���ӳ������⡣���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬
	������񫣬�ֶ����һ���� �ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬
	�ֶ��һ�����Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ����һ���� 
	����N���������ٳ�ʱ����ֻʣ��һ�������ˡ����һ�칲ժ�������ӡ�
*/
//int main()
//{
//	int n, i = 2, sum = 1;
//
//	int x;
//	x = scanf("%d", &n);
//	if (x != 1)
//	{
//		printf("�������\n");
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
	�õ������� ƽ����
	��ʽ����a��ƽ�����ĵ�����ʽΪ�� 
	X[n+1]=(X[n]+a/X[n])/2    ,X[1]=a/2 
	Ҫ��ǰ����������Ĳ�ľ���ֵ����0.00001�� 
	�������3λС��
*/
//int main()
//{
//	float a, x1, x2;
//
//	int x;
//	x = scanf("%f", &a);
//	if (x != 1)
//	{
//		printf("�������\n");
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
	�ü�����ɸѡ����N���ڵ�������
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
//		printf("�������\n");
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
	��ѡ�񷨶�10��������С��������
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
			printf("�������\n");
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
