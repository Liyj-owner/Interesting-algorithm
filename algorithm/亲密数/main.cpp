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
	int i, sum = 0;
	for (i = 1; i < a; i++)
	{
		if (a%i == 0)
			sum = sum + i;
	}
	return sum;
}

int main()
{
	int i,j,x[3001];
	printf("3000以内的亲密数为:\n");
	/*穷举法*/
	#if 0
	for (i = 1; i <= 3000; i++)
	{
		
		for (j = i+1; j <= 3000; j++)
		{
			if ((FactorSum(i) == j )&&(FactorSum(j)==i))
			{
				printf("%d  %d\n", i, j);
			}
		}
	}
	#endif 
#if 1
	for (i = 1; i <= 3000; i++)
		x[i] = FactorSum(i);
	for (i = 1; i <= 3000; i++)
	{
		if (x[i] != 111)
		{
			for (j = i + 1; j <= 3000; j++)
			{
				if ((x[i]==j)&&(x[j]==i))
				{
					x[i] = 111;
					printf("%d  %d\n", i, j);
				}
			}
		}
	}
#endif
	system("pause");
}

