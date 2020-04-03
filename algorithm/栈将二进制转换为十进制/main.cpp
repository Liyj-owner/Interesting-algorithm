/*****
使用栈把二进制数转化为十进制数
高位先输入
*****/
#include "math.h"
#include "Stack.h"

void IntSolution();
void CharSolution();
void main(){

	//IntSolution();
	CharSolution();
	system("pause");
}

/*逐个输入二进制位数，输入2为输入结束*/
void IntSolution(){

	LStack s;
	int sum = 0;
	int n = 0;
	int e;
	int data;

	InitStack(&s);
	printf("请输入二进制数,以2结束输入：");
	scanf("%d", &e);

	while (e != 2){
		Push(&s, e);
		n++;
		scanf("%d", &e);
	}

	while (n)
	{
		data = Pop(&s);
		n--;
		sum = sum + data*pow(2.0, n);
	}
	printf("转化为的十进制为%d\n", sum);
	DestroyStack(&s);
}

/*二进制为字符输入，符号#结束*/
void CharSolution(){
	LStack s;
	char c='0';
	int len=0;
	int sum=0;
	InitStack(&s);
	printf("请输入二进制数字以'#'结束：\n");
	scanf("%c",&c);
	while (c!='#')
	{   
		Push(&s,c);
		len++;
		scanf("%c",&c);
	}
	while (len)
	{
		c = Pop(&s);
		len--;
		sum = sum + (c -48)* pow(2.0, len);
	}
	printf("转化的十进制为：%d\n", sum);
	DestroyStack(&s);

}