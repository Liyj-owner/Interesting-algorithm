#include "stdio.h"
#include "stdlib.h"

void InputArry(int (*a)[4],int n, int m){
	int x , y ;
	printf("ÇëÊäÈë4*3µÄ¾ØÕó\n");
	for (x = 0; x < n; x++){
		for (y = 0; y < m; y++){
			scanf("%d", &a[x][y]);
		}
	}
}

void OutputArry(int (*a)[3], int n, int m){
	int x, y;
	for (x = 0; x < n; x++){
		for (y = 0; y < m; y++){
			printf("%d  ", a[x][y]);
		}
		printf("\n");
	}
}

void ExchangeArry(int (*a)[4], int (*b)[3],int n ,int m){
	int x, y;
	for (x = 0; x < n; x++){
		for (y = 0; y < m; y++){
			b[x][y] = a[y][x];
		}

	}
}

void main(){
	int a[3][4];
	int b[4][3];
	InputArry(a,3,4);
	ExchangeArry(a, b, 4, 3);
	OutputArry(b, 4, 3);
	system("pause");
}