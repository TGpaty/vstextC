#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
�����������ĺ�,����2λС�� 1~a֮�� 1~b��ƽ���� 1~c�ĵ�����
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
//		printf("�������\n");
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
��ӡ������"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ����λ�������λ���������͵��ڸñ��� 
���磺153��һ��ˮ�ɻ�������Ϊ153=1^3+5^3+3^3�� 
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
һ�������ǡ�õ��ڲ�������������������֮�ͣ�������ͳ�Ϊ"����"�� 
���磬6������Ϊ1��2��3����6=1+2+3�����6��"����"�� 
������ҳ�N֮�ڵ��������������������ʽ���������
*/

int main()
{
	// i�ⲿѭ�� j�ڲ�ѭ�� k�����������ӵļ�����
	int n, i = 2, j = 1, k = 1;
	// ���Ӻ�
	int yzh;

	int x;
	x = scanf("%d", &n);
	if (x != 1)
	{
		printf("�������\n");
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
