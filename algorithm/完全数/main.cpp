#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*
	功能：求一个数的因子数之和
	参数:需要计数的数
	返回：因子数之和
*/
int FactorSum(int a)
{
	int i,sum=0;
	for ( i = 1; i < a; i++)
	{
		if (a%i == 0 )
			sum = sum + i;
	}
	return sum;
}

/*
	功能：判断是否为完全数
	参数：需要判断的数
	返回：1为完全数
		  0不是完全数
*/
int perfextnumber(int a)
{
	if (a == FactorSum(a))
		return 1;
	else
		return 0;
}

int main()
{
	int i;
	printf("1-1000以内的完全数为:\n");
	for (i = 1; i <= 1000; i++)
	{
		if (perfextnumber(i))
			printf("%d  ", i);
	}
	printf("\n");
	system("pause");
}

