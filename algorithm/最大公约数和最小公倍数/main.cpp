#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int gys(int a, int b)
{
	int i;
	if (a > b)
		i = b;
	else
	{
		i = a;
	}
	for (; i > 0; i--)
	{
		if (a%i == 0 & b%i == 0)
			return i;
	}
	return -1;
}

int gbs(int a, int b)
{
	int i;
	if (a > b)
		i = a;
	else
	{
		i = b;
	}
	for (; i > 0;i++)
	{
		if( i%a == 0 & i%b == 0)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int a, b;
	printf("请输入第一个数:");
	scanf("%d", &a);
	printf("请输入第二个数:");
	scanf("%d", &b);
	printf("%d和%d的最小公倍数为%d\n", a, b, gbs(a, b));
	printf("%d和%d的最大公约数为%d\n", a, b, gys(a, b));
	system("pause");
}