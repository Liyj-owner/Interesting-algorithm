#include "stdio.h"
#include "stdlib.h"

#define MAX 20

char Codestr[MAX] = "0";
int n;

/*解码 
1为a;
01为b;
001为c;
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

/*输入编码字符串以2结束*/
void InCode(char *str){
	char *s;
	s = str;
	printf("请输入字符串代码：");
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

