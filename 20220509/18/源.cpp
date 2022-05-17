/*
	时间：2022年5月18日
	天时彩云
	坚持
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*
	小明开了一家糖果店。他别出心裁：把水果糖包成4颗一包和7颗一包的两种。糖果不能拆包卖。
	小朋友来买糖的时候，他就用这两种包装来组合。当然有些糖果数目是无法组合出来的，比如要买  10  颗糖。
	你可以用计算机测试一下，在这种包装情况下，最大不能买到的数量是17。大于17的任何数字都可以用4和7组合出来。
	本题的要求就是在已知两个包装的数量时，求最大不能组合出的数字。
*/
//int main()
//{
//	int a, b, c[101000] = { 0 }, k, i, maxx;
//
//	int x;
//	x = scanf("%d%d", &a, &b);
//	if (x != 2 || a > 1000 || b > 1000 || a <= 0 || b <= 0)
//	{
//		printf("输入错误\n");
//		exit(0);
//	}
//
//	if (a - b > 0)
//		k = b;
//	else
//		k = a;
//
//	c[a] = 1;
//	c[b] = 1;
//
//	i = k;
//	while (i < 100000)
//	{
//		if (c[i] == 1)
//		{
//			c[i + a] = 1;
//			c[i + b] = 1;
//		}
//		else
//		{
//			maxx = i;
//		}
//		i++;
//	}
//
//	printf("%d\n", maxx);
//
//	return EXIT_SUCCESS;
//}


/*
	编写一函数，由实参传来一个字符串，统计此字符串中字母、数字、空格和其它字符的个数，
	在主函数中输入字符串以及输出上述结果。
*/
//void func(char* s);
//
//
//int a = 0, b = 0, c = 0, d = 0;
//
//int main()
//{
//	char aa[100];
//
//	int x;
//	gets_s(aa);
//
//	func(aa);
//
//	printf("%d %d %d %d\n", a, b, c, d);
//
//	return EXIT_SUCCESS;
//}
//
//void func(char* s)
//{
//	char* p = s;
//	while (*p != '\0')
//	{
//		if (*p >= 'a' && *p <= 'z' || *p >= 'A' && *p <= 'Z')
//		{
//			a++;
//		}
//		else if (*p >= '0' && *p <= '9')
//		{
//			b++;
//		}
//		else if (*p == ' ')
//		{
//			c++;
//		}
//		else
//		{
//			d++;
//		}
//
//		p++;
//	}
//}


/*
	定义一个带参的宏，使两个参数的值互换，并写出程序，输入两个数作为使用宏时的实参。输出已交换后的两个值。
*/
//#define rep(a, b) printf("%d %d\n", b, a)
//
// 
//int main()
//{
//	int a, b;
//
//	int x;
//	x = scanf("%d %d", &a, &b);
//
//	rep(a, b);
//
//	return EXIT_SUCCESS;
//}


/*
	输入两个整数，求他们相除的余数。用带参的宏来实现，编程序。
*/
//#define yu(a, b) printf("%d\n", a % b)
//
//int main()
//{
//	int a, b;
//	
//	int x;
//	x = scanf("%d %d", &a, &b);
//	
//	yu(a, b);
//
//	return EXIT_SUCCESS;
//}


/*
	三角形面积=SQRT(S*(S-a)*(S-b)*(S-c)) 其中S=(a+b+c)/2，a、b、c为三角形的三边。
	定义两个带参的宏，一个用来求area， 另一个宏用来求S。 写程序，在程序中用带实参的宏名来求面积area。
*/
#define s(a, b, c) (a + b + c ) / 2
#define area(s, a, b, c)  sqrt(s * (s - a) * (s - b) * (s - c))

int main()
{
	float a, b, c;
	float s;

	int x;
	x = scanf("%f %f %f", &a, &b, &c);

	s = s(a, b, c);
	
	printf("%.3f\n", area(s, a, b, c));

	return EXIT_SUCCESS;
}
