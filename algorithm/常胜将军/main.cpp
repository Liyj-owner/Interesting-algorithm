#include "stdio.h"
#include "stdlib.h"

void main(){
	int spare=21;
	int people;
	int computer;
	printf("--------------------------------\n");
	printf("----�㲻��սʤ�ң���������----\n");
	printf("--------------------------------\n");
	while (1){
		printf("-----���ڻ�ʣ%d�����--------\n", spare);
		printf("������Ҫ�õ��Ļ����:");
		scanf("%d", &people);
		if (!(people >= 1 && people <= 4 && people<=spare)){
			printf("��Ҫ�õ��Ļ��������ȷ��\n");
			continue;
		}
		spare = spare - people;
		if (spare == 0){
			printf("���Ի�ʤ!\n");
			break;
		}
		computer = 5 - people;
		printf("�����õ��Ļ����Ϊ%d\n", computer);
		spare = spare - computer;
		if (spare == 0)
		{
			printf("�˻�ʤ!\n");
			break;
		}
	}
	system("pause");
}