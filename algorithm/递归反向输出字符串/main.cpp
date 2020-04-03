#include "stdio.h"
#include "stdlib.h"

void BackPrint(){
	char a;
	scanf("%c", &a);
	if (a == '#'){
		printf("反向输出字符串为：");
	}
	if (a != '#'){
		BackPrint();
		printf("%c", a);
	}
}

void main(){
	printf("请输入字符串以“#”结束\n");
	BackPrint();
	printf("\n");
	system("pause");
}