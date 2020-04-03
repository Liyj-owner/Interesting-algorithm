#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

#define N 20
void PrintTrangle();
void PrintYangHui();
int main()
{
	PrintYangHui();
	system("pause");
}
void PrintTrangle()
{
	int n;
	printf("How many rows of * for trangle\n"); 
	scanf("%d", &n);
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < n - i; j++)
			printf(" ");
		for (j = 0; j < 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}
}
void PrintYangHui()
{
	int n;
	printf("How many rows  for YangHui Trangle\n");
	scanf("%d", &n);
	int i, j, k, buf[N], tmp[N];
	for (i = 0; i <= n; i++)
	{
		if (i == 0)
		{
			for (j = 0; j <= n; j++)
				printf(" ");
			printf("1\n");
		}
		else if (i==1)
		{
			for (j = 0; j < n; j++)
				printf(" ");
			printf("1 1\n");
			buf[0] = 1; 
			buf[1] = 1;
		}
		else
		{
			for (j = 0; j <= i; j++)
			{
				if (j == 0 || j == i)
				{
					if (j==0)
					{
						for (k = 0; k <= n - i; k++)
							printf(" ");
					}
					printf("1 ");
					tmp[j] = 1;
				}
				else
				{
					printf("%d ", buf[j - 1] + buf[j]);
					tmp[j] = buf[j] + buf[j - 1];
				}
			}
			printf("\n");
			for (k = 0; k <= i; k++)
				buf[k] = tmp[k];
		}
	}
}
