#include "stdio.h"
#include "stdlib.h"

void main(){
	int spare=21;
	int people;
	int computer;
	printf("--------------------------------\n");
	printf("----你不能战胜我，不信试试----\n");
	printf("--------------------------------\n");
	while (1){
		printf("-----现在还剩%d跟火柴--------\n", spare);
		printf("输入你要拿掉的火柴数:");
		scanf("%d", &people);
		if (!(people >= 1 && people <= 4 && people<=spare)){
			printf("你要拿掉的火柴数不正确！\n");
			continue;
		}
		spare = spare - people;
		if (spare == 0){
			printf("电脑获胜!\n");
			break;
		}
		computer = 5 - people;
		printf("电脑拿掉的火柴数为%d\n", computer);
		spare = spare - computer;
		if (spare == 0)
		{
			printf("人获胜!\n");
			break;
		}
	}
	system("pause");
}