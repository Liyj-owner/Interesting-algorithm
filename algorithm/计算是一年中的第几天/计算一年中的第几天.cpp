
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
	printf("��������ݣ�");
	scanf("%d", &year);
	printf("�������·ݣ�");
	scanf("%d", &month);
	printf("�������շݣ�");
	scanf("%d", &data);
	days=Day(year, month, data);
	printf("����%d���еĵ�%d��\n", year, days);
	system("pause");
}