#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*
	���ܣ���һ������������֮��
	����:��Ҫ��������
	���أ�������֮��
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
	���ܣ��ж��Ƿ�Ϊ��ȫ��
	��������Ҫ�жϵ���
	���أ�1Ϊ��ȫ��
		  0������ȫ��
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
	printf("1-1000���ڵ���ȫ��Ϊ:\n");
	for (i = 1; i <= 1000; i++)
	{
		if (perfextnumber(i))
			printf("%d  ", i);
	}
	printf("\n");
	system("pause");
}

