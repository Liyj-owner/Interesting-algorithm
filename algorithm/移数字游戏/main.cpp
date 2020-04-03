#include "stdio.h"
#include "stdlib.h"
void getStep(int a[]){
	int i, j, temp;
	printf("移动步骤为：\n");
	for (i = 1; i <8 ;i++)
	for (j = 0; j <8  - i; j++){
		if (a[j]>a[j + 1]){
			temp = a[j];
			printf("%d#-->0#\n", j + 1);
			a[j] = a[j + 1];
			printf("%d#-->%d#\n", j + 2, j + 1);
			a[j + 1] = temp;
			printf("0#-->%d\n", j + 2);
		}
	}
}

void Print(int a[]){
	printf("  [%d]--[%d]--[%d]  \n", a[0], a[1], a[2]);
	printf("   | %c |  %c |\n", 92, 47);
	printf("  [%d]--[ ]--[%d]  \n", a[7], a[3]);
	printf("   | %c |  %c |\n", 47, 92);
	printf("  [%d]--[%d]--[%d]  \n", a[6], a[5], a[4]);
}


void main(){
	int data[9] = {0};
	printf("输入数阵中1到8的数字:\n");
	for (int i = 0; i < 8; i++){
		scanf("%d", &data[i]);
	}
	Print(data);
	getStep(data);
	printf("移动之后为：\n");
	Print(data);
	system("pause");
}