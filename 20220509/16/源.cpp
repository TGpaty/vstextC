/*
	ʱ�䣺2022��5��16��
	��ʱ����
	���ͣ����ͣ����ͣ�
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*
	дһ������ʹ�����һ���ַ����������ţ��������������벢����������ַ������������ո񣩡�
*/
//void func(char* s);
//
//
//int main()
//{
//	char s[100];
//
//	int x;
//	x = scanf("%s", s);
//
//	func(s);
//
//	printf("%s\n", s);
//
//	return EXIT_SUCCESS;
//}
//
//
//void func(char *s)
//{
//	char temp;
//
//	int i = strlen(s) - 1;
//	int j = 0;
//
//	while (i > j)
//	{
//		temp = s[i];
//		s[i] = s[j];
//		s[j] = temp;
//
//		i--;
//		j++;
//	}
//	
//}

/*
	дһ�������������ַ�������
*/
char* s(char* s1, char* s2);


int main()
{
	char s1[10], s2[10];
	char* s3;

	int x;
	x = scanf("%s%s", s1, s2);

	s3 = s(s1, s2);

	printf("%s\n", s3);

	return EXIT_SUCCESS;
}


char* s(char* s1, char* s2)
{
	char* s3 = s1;

	int i = strlen(s1);
	int j = 0;
	int k = strlen(s2);

	while (j < k)
	{
		s3[i] = s2[j];

		i++;
		j++;
	}
	s3[i] = '\0';

	return s3;
}
