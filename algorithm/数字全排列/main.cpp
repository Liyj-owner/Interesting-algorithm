
#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define MAX 100 

/*	����ȫ������
	a[]:Ϊ��Ҫ���������
	n��δ������������Ԫ�صĸ���
	s:��������������ĸ���
	r[]:������õ�����������
	m��ԭʼ������Ҫ�����Ԫ�ظ���
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
	printf("�����������������Ԫ�صĸ���:");
	scanf("%d", &n);
	printf("������������%d��Ԫ��\n", n);
	for (i = 0; i < n; i++)
	{
		printf("��%d��:",i+1);
		scanf("%d", &a[i]);
	}
	Perm(a, n, 0, r, n);
	system("pause");
}