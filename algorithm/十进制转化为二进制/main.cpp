#include "stdio.h"
#include "stdlib.h"

void main(){
	int num;
	int bin[10] = {0};
	int i = 0;
	printf("������Ҫת����ʮ��������");
	scanf("%d", &num);
	do
	{
		bin[i] = num % 2;
		num=num / 2;
		i++;
	} while (num);
	printf("ת��������Ϊ��");
	for (int j = i - 1; j >= 0; j--)
	{
		printf("%d", bin[j]);
	}
	printf("\n");
	system("pause");
}