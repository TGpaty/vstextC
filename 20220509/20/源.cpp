/*
	ʱ�䣺2022��5��20��
	��ʱ����
	��һ�������������
*/
#include<stdio.h>
#include<stdlib.h>


/*
	�����year������һ���꣬���б������Ƿ����ꡣ
	��ʾ���������Զ���ΪLEAP_YEAR���β�Ϊy���ȶ�������ʽΪ #define LEAP_YEAR(y) ��������Ƶ��ַ�����
*/
#define LEAP_YEAR(y) (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) ? 1 : 0


int main()
{
	int x, y;
	x = scanf("%d", &y);

	if (LEAP_YEAR(y))
		printf("L");
	else
		printf("N");

	return 0;
}
