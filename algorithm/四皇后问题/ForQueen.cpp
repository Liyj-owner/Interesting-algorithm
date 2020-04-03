#include "stdio.h"
#include "stdlib.h"
int count;
/*
�ж�������Q[i][j]��λ���Ƿ���Է���һ���ʺ�
���ԣ�����1��
�����ԣ�����0��
*/
int isCorrect(int i, int j, int(*Q)[4]){
	int s, t;

	/*�ж���*/
	for (s=i,t=0;t<4; t++)
	if (Q[s][t] == 1 && t != j) return 0;

	/*�ж���*/
	for (s = 0, t = j; s < 4; s++)
	if (Q[s][t] == 1 && s != i) return 0;

	/*�ж����Ͻ�*/
	for (s = i - 1, t = j - 1; s >= 0 && t >= 0;s--,t--)
	if (Q[s][t] == 1 ) return 0;

	/*�ж����Ͻ�*/
	for (s = i + 1, t = j - 1; s < 4 && t >= 0; s++, t--)
	if (Q[s][t] == 1) return 0;

	/*�ж����½�*/
	for (s = i - 1, t = j + 1; s>=0 && t < 4;s--,t++)
	if (Q[s][t] == 1) return 0;

	/*�ж����½�*/
	for (s = i + 1, t = j + 1; s < 4 && t < 4;s++,t++)
	if (Q[s][t] == 1) return 0;

	return 1;
}


/*
���õݹ���ݷ�������ĸ��ʺ�����
*/

void Queen(int j, int(*Q)[4]){
	int i, k;
	if (j == 4){
		for (i = 0; i < 4; i++)
		{
			for (k = 0; k < 4; k++)
				printf("%d  ", Q[i][k]);
			printf("\n");
		}
		count++;
		printf("\n");
		
	}
	for (i = 0; i < 4; i++){
		if (isCorrect(i, j, Q))
		{
			Q[i][j] = 1;
			Queen(j + 1, Q);
			Q[i][j] = 0;
		}

	}
}

void main(){

	int Q[4][4];
	int i, j;
	for (i = 0; i < 4;i++)
	for (j = 0; j < 4; j++)
		Q[i][j] = 0;
	Queen(0, Q);
	printf("�Ļʺ�Ľ���%d��\n",count);
	system("pause");
}