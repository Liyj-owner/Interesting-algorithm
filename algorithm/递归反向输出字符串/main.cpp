#include "stdio.h"
#include "stdlib.h"

void BackPrint(){
	char a;
	scanf("%c", &a);
	if (a == '#'){
		printf("��������ַ���Ϊ��");
	}
	if (a != '#'){
		BackPrint();
		printf("%c", a);
	}
}

void main(){
	printf("�������ַ����ԡ�#������\n");
	BackPrint();
	printf("\n");
	system("pause");
}