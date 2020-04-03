/*****
ʹ��ջ�Ѷ�������ת��Ϊʮ������
��λ������
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

/*������������λ��������2Ϊ�������*/
void IntSolution(){

	LStack s;
	int sum = 0;
	int n = 0;
	int e;
	int data;

	InitStack(&s);
	printf("�������������,��2�������룺");
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
	printf("ת��Ϊ��ʮ����Ϊ%d\n", sum);
	DestroyStack(&s);
}

/*������Ϊ�ַ����룬����#����*/
void CharSolution(){
	LStack s;
	char c='0';
	int len=0;
	int sum=0;
	InitStack(&s);
	printf("�����������������'#'������\n");
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
	printf("ת����ʮ����Ϊ��%d\n", sum);
	DestroyStack(&s);

}