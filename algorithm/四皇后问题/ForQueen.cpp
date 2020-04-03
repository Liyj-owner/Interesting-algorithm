#include "stdio.h"
#include "stdlib.h"
int count;
/*
判断棋盘中Q[i][j]的位置是否可以放置一个皇后
可以：返回1；
不可以：返回0；
*/
int isCorrect(int i, int j, int(*Q)[4]){
	int s, t;

	/*判断行*/
	for (s=i,t=0;t<4; t++)
	if (Q[s][t] == 1 && t != j) return 0;

	/*判断列*/
	for (s = 0, t = j; s < 4; s++)
	if (Q[s][t] == 1 && s != i) return 0;

	/*判断左上角*/
	for (s = i - 1, t = j - 1; s >= 0 && t >= 0;s--,t--)
	if (Q[s][t] == 1 ) return 0;

	/*判断右上角*/
	for (s = i + 1, t = j - 1; s < 4 && t >= 0; s++, t--)
	if (Q[s][t] == 1) return 0;

	/*判断左下角*/
	for (s = i - 1, t = j + 1; s>=0 && t < 4;s--,t++)
	if (Q[s][t] == 1) return 0;

	/*判断右下角*/
	for (s = i + 1, t = j + 1; s < 4 && t < 4;s++,t++)
	if (Q[s][t] == 1) return 0;

	return 1;
}


/*
利用递归回溯法，解决四个皇后问题
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
	printf("四皇后的解有%d个\n",count);
	system("pause");
}