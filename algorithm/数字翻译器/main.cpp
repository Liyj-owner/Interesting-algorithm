#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

char data_1[19][10] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen"
						, "fourteen", "fiveteen", "sixteen", "seventeen", "eightteen", "ninteen" };

char data_2[8][8] = { "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninty" };
void translation_A(long N);
void translation_B(long N);
void translation_C(long N);

void translation_A(long N)  /*翻译千位*/
{
	long a;
	if (N == 0) { printf("Zero\n"); return; }
	a = N / 1000;
	if (a != 0)
	{
		translation_B(a);
		printf("thousand ");
	}
	a = N % 1000;
	if (a != 0)
		translation_B(a);

}

void translation_B(long N)	/*翻译百位*/
{
	long b;
	b = N / 100;
	if (b != 0)
	{
		translation_C(b);
		printf("hundred ");
	}
	b = N % 100;
	if (b != 0);
	translation_C(b);
}

void translation_C(long N)	/*翻译个位*/
{
	long c;
	if (N <= 19)
	printf("%s ", data_1[N - 1]);
	else
	{
		c = N / 10;
		printf("%s ", data_2[c - 2]);
		c = N % 10;
		if (c != 10)
		{
			printf("%s ", data_1[c - 1]);
		}
	}
}
int main()
{
	long N; 
	printf("请输入0-99999的一个数： ");
	scanf("%ld", &N);
	translation_A(N);
	system("pause");
}