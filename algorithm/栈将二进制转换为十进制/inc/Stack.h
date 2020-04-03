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

/*��ʼ��ջ*/
void InitStack(NStack s);

/*����ѹջ*/
void Push(NStack s, Elemtype e);

/*���ݳ�ջ*/
Elemtype Pop(NStack s);
#endif _STACK_H_
