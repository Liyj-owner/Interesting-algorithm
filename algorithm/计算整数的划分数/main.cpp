#include "stdio.h"
#include "stdlib.h"

int p(int n, int m){
	if (m == 1 || n==1 ) return 1;
	if (m > n) return p(n, n);
	if (m == n) return 1 + p(n, m - 1);
	return p(n, m - 1) + p(n - m, m);
}

void main(){
	int n, s;
	printf("����Ҫ���ֵ�������\n");
	scanf("%d", &n);
	s = p(n, n);
	printf("%d �Ļ�����Ϊ%d\n", n, s);
	system("pause");
}