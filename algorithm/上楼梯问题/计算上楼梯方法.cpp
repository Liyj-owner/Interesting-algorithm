/*
������¥�ݵķ�����ÿ����һ�ڻ�������¥��
*/
#include "stdio.h"
#include "stdlib.h"

#define MAXSTEP 20

int Steps[MAXSTEP] = { 0 };		//�߹��Ĳ���
int cout;						//������Ŀ

/*
��¥���Ӻ���
footsteep:��ǰҪ�ϵ�¥����
count���Ѿ��ϵ�¥����
steps���߹��Ĳ���
totalsteep:¥��ӵ�е�̨��
*/

void Upstairs(int footsteep, int count, int totalsteep,int steps){
	if (footsteep + count == totalsteep){

		Steps[steps] = footsteep;
		for (int i = 0; i <= steps; i++)
		{
			printf("%d  ", Steps[i]);
		}
		printf("\n");
		cout++;
		return;
	}
	if (footsteep + count>totalsteep)
		return;
	Steps[steps] = footsteep;
	Upstairs(1, footsteep + count, totalsteep, steps + 1);
	Upstairs(2, footsteep + count, totalsteep, steps + 1);
}

void main(){
	int n;
	printf("¥�ݵĽ����ǣ�");
	scanf("%d", &n);			//����¥��ӵ�е�̨����
	Upstairs(1, 0, n, 0);
	Upstairs(2, 0, n, 0);
	printf("��̨���ܹ���%d�ַ���", cout);
	system("pause");
}