#include "stdio.h"
#include "string.h"
#include "stdlib.h"
void main()
{
#if 0
	FILE *fp;
	char pathName[20], txt1[20] = { '\0' },txt2[20] = { '\0' };
	int fileLen;
	printf("please input the path name of the file\n");
	scanf("%s", pathName);
	fp = fopen(pathName, "w"); /*以写方式打开*/
	/*将字符串写入文件*/
	printf("please input a string to this file\n");
	scanf("%s", txt1);
	fileLen = strlen(txt1);
	fwrite(txt1, fileLen, 1, fp);
	fclose(fp);

	printf("the file has been saved\n");
	printf("the content of the file :%s is \n", pathName);
	fp = fopen(pathName, "r");
	fread(txt2, fileLen, 1, fp);
	printf("%s\n", txt2);
#endif
	FILE *myf;
	long f;
	myf = fopen("test.txt","r");
	fseek(myf, 0, SEEK_END);
	f = ftell(myf);
	fclose(myf);
	printf("the length of the file is %d byte\n",f);
    system("pause");
}