#include "Stack.h"

/*³õÊ¼»¯Õ»*/
void InitStack(NStack s){
	s->base = (Elemtype*)malloc(STACK_INTT_SIZE*sizeof(Elemtype));
	if (!s->base) exit(0);
	s->top = s->base;
	s->stacksize = STACK_INTT_SIZE;
}

/*Ñ¹Õ»*/
void Push(NStack s,Elemtype e){
	if (s->top - s->base >= s->stacksize)
	{
		/*Õ»Âú£¬Ôö¼ÓÒ»¶ÎÕ»*/
		s->base = (Elemtype *)realloc(s->base, (s->stacksize + STACKINCREAT)*sizeof(Elemtype));
		if (!s->base) exit(0);
		s->stacksize = s->stacksize + STACKINCREAT;
	}
	*(s->top )= e;
	s->top++;
}

/*Êı¾İ³öÕ»*/
Elemtype Pop(NStack s){
	Elemtype e;
	if (s->top==s->base)
	{
		return NULL;
	}
	e = * --(s->top);
	return e;
}

/*Çå¿ÕÕ»*/
void ClearStack(NStack s){
	s->top = s->base;
}

/*´İ»ÙÕ»*/
void DestroyStack(NStack s){
	free(s->base);
}
