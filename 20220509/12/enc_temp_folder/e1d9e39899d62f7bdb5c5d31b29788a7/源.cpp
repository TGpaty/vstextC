/*
	ʱ�䣺2022��5��12��
	���ߣ���ʱ����
	���ҵİ������ԣ��������ĵ�Լ����
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


/*
	дһ���ж������ĺ�����������������һ������������Ƿ�����������Ϣ��
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
//		printf("�������\n");
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
	дһ��������ʹ������һ����ά���飨��������ת�ã������л�����
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
//				printf("�������\n");
//				exit(11);
//			}
//		}
//	}
//}


/*
	дһ������ʹ�����һ���ַ����������ţ��������������벢����������ַ������������ո񣩡�
*/
void fund(char *s);


int main()
{
	char* s = NULL;

	int x;
	x = scanf("%s", s);
	if (x != 1)
	{
		printf("�������\n");
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
