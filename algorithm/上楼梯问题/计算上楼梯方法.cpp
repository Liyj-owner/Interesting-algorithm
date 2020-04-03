/*
计算上楼梯的方法，每次走一节或者两节楼梯
*/
#include "stdio.h"
#include "stdlib.h"

#define MAXSTEP 20

int Steps[MAXSTEP] = { 0 };		//走过的步数
int cout;						//方法数目

/*
上楼梯子函数
footsteep:当前要上的楼梯数
count：已经上的楼梯数
steps：走过的不是
totalsteep:楼梯拥有的台阶
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
	printf("楼梯的阶数是：");
	scanf("%d", &n);			//输入楼梯拥有的台阶数
	Upstairs(1, 0, n, 0);
	Upstairs(2, 0, n, 0);
	printf("上台阶总共有%d种方法", cout);
	system("pause");
}