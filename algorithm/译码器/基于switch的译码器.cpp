#include "stdio.h"
#include "stdlib.h"

#define MAX 20

char Codestr[MAX] = "0";
int n;

/*���� 
1Ϊa;
01Ϊb;
001Ϊc;
*/
void Decode(char *str, int n){
	int i = 0;
	while (i < n){
		switch (str[i])
		{
		case '1' : printf("a"); break;
		case '0' :{
				   i++;
				   switch (str[i])
				   {
				   case '1': printf("b"); break;
				   case '0':{
							  i++;
							  switch (str[i])
							  {
							  case '1': printf("c"); break;
							  }
						   }
							 
				   }
		}
		}
		i++;
	}
}

/*��������ַ�����2����*/
void InCode(char *str){
	char *s;
	s = str;
	printf("�������ַ������룺");
	scanf("%c", s);
	while (*s != '2'){
		s++;
		n++;
		scanf("%c", s);
	}
}

void main(){
	//char str[18] = "001011101001011001";
	//char str[5]="00000";
	InCode(Codestr);
	Decode(Codestr, n);
	printf("\n");
	system("pause");
}

