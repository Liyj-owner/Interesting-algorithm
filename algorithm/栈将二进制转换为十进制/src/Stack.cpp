#include "Stack.h"

/*��ʼ��ջ*/
void InitStack(NStack s){
	s->base = (Elemtype*)malloc(STACK_INTT_SIZE*sizeof(Elemtype));
	if (!s->base) exit(0);
	s->top = s->base;
	s->stacksize = STACK_INTT_SIZE;
}

/*ѹջ*/
void Push(NStack s,Elemtype e){
	if (s->top - s->base >= s->stacksize)
	{
		/*ջ��������һ��ջ*/
		s->base = (Elemtype *)realloc(s->base, (s->stacksize + STACKINCREAT)*sizeof(Elemtype));
		if (!s->base) exit(0);
		s->stacksize = s->stacksize + STACKINCREAT;
	}
	*(s->top )= e;
	s->top++;
}

/*���ݳ�ջ*/
Elemtype Pop(NStack s){
	Elemtype e;
	if (s->top==s->base)
	{
		return NULL;
	}
	e = * --(s->top);
	return e;
}

/*���ջ*/
void ClearStack(NStack s){
	s->top = s->base;
}

/*�ݻ�ջ*/
void DestroyStack(NStack s){
	free(s->base);
}
