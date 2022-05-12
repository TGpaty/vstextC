/*
	时间：2022年5月17日
	天时彩云
	坚持
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


/*
	写一函数，将一个字符串中的元音字母复制到另一个字符串，然后输出。
*/
//void func(char* s);
//
//
//char c[50] = {};
//
//int main()
//{
//	char s[50];
//
//	int x;
//	x = scanf("%s", s);
//
//	func(s);
//
//	printf("%s\n", c);
//
//	return EXIT_SUCCESS;
//}
//
//
//void func(char* s)
//{
//	int i = 0;
//	while (*s != '\0')
//	{
//		if (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u')
//		{
//			c[i] = *s;
//			i++;
//		}
//
//		s++;
//	}
//}


/*
	写一函数，输入一个四位数字，要求输出这四个数字字符，
	但每两个数字间空格。如输入1990，应输出"1 9 9 0"。
*/
//void func(int a);
//
//
//int number = 48;
//
//int main()
//{
//	
//	int a;
//
//	int x;
//	x = scanf("%d", &a);
//	if (x != 1)
//	{
//		printf("输入错误\n");
//		exit(0);
//	}
//
//	func(a);
//
//	return EXIT_SUCCESS;
//}
//
//
//void func(int a)
//{
//	int i = 3;
//	int b;
//	char charValue;
//	while (i >= 0)
//	{
//		b = (int)(a / pow(10, i)) % 10;
//		charValue = number + b;
//
//		if(i == 0)
//			printf("%c", charValue);
//		printf("%c ", charValue);
//
//		i--;
//	}
//	putchar('\n');
//}
