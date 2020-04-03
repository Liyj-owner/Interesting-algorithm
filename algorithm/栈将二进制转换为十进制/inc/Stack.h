#ifndef _STACK_H
#define _STACK_H

#include "stdio.h"
#include "stdlib.h"

typedef int Elemtype;
typedef struct MyStruct LStack;
typedef struct MyStruct *NStack;

#define  STACK_INTT_SIZE  100
#define  STACKINCREAT  10
struct MyStruct
{
	Elemtype *base;
	Elemtype *top;
	int stacksize;
};

/*初始化栈*/
void InitStack(NStack s);

/*数据压栈*/
void Push(NStack s, Elemtype e);

/*数据出栈*/
Elemtype Pop(NStack s);
#endif _STACK_H_
