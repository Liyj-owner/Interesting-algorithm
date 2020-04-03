
#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

int IsRN(int n){
	if ((n % 4) == 0 && (n % 100) != 0 || (n % 400) == 0)
	{
		return 1;
	}
	return 0;
}

int Day(int year, int month, int date)
{
	unsigned char i;
	int days=0;
	int months[13] = { 0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (IsRN(year))
		months[2] = 29;
	else
		months[2] = 28;
	for (i = 1; i < month ; i++)
	{
		days += months[i];
	}
	days += date;
	return days;
}
void main(){
	int year, month, data,days;
	printf("请输入年份：");
	scanf("%d", &year);
	printf("请输入月份：");
	scanf("%d", &month);
	printf("请输入日份：");
	scanf("%d", &data);
	days=Day(year, month, data);
	printf("这是%d年中的第%d天\n", year, days);
	system("pause");
}