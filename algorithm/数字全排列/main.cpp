
#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define MAX 100 

/*	数组全排序函数
	a[]:为需要排序的数组
	n：未排序子序列中元素的个数
	s:已排序序列数组的个数
	r[]:已排序好的子序列数组
	m：原始数组需要排序的元素个数
	*/
void Perm(int a[], int n, int s, int r[], int m)
{
	int i, j, k, flag = 0;
	int b[MAX];
	for ( i = 0; i < n; i++)
	{
		flag = 1;
		r[s] = a[i];
		j = 0;
		for (k = 0; k < n; k++)
		{
			if (i != k)
			{
				b[j] = a[k];
				j++;
			}
		}
		Perm(b, n - 1, s + 1, r, m);
	}
	if (flag == 0)
	{
		for (k = 0; k < m; k++)
		{
			printf("%d", r[k]);
		}
		printf("\n");
	}

}

int main()
{
	int a[MAX], r[MAX];
	int i, n;
	printf("请输入待排序数组中元素的个数:");
	scanf("%d", &n);
	printf("请输入数列中%d个元素\n", n);
	for (i = 0; i < n; i++)
	{
		printf("第%d个:",i+1);
		scanf("%d", &a[i]);
	}
	Perm(a, n, 0, r, n);
	system("pause");
}