#include "List.h"

/*��������
	�������ݸ���n;
*/
List CreateList(int n)
{
	List p, r=NULL, pList = NULL;
	ElementType e;
	int i;
	for ( i = 1; i <=n; i++)
	{
		scanf("%d", &e);
		p = (List)malloc(sizeof(LNode));
		p->Element = e;
		p->Next = NULL;
		if (!pList)
		{
			pList = p;
		} 
		else
		{
			r->Next = p;

		}
		r = p;
	}
	return pList;

}

/*
  �������봴������
*/

List KeyCreatList(){
	List p, r = NULL, pList = NULL;
	int data,i=0;
	printf("�������%d������:",++i);
	//scanf("%d", &data);
	while (scanf("%d", &data)!=EOF)
	{

		printf("\n�������%d������:", ++i);
		p = (List)malloc(sizeof(List));
		p->Element = data;
		p->Next=NULL;
		if (!pList)
			pList = p;
		else
		{
			r->Next = p;
		}
		r = p;
		//scanf("%d", &data);
		
	}
	return pList;

}

void PrintList(List *list){
	List p;
	//int data;
	p = *list;
	while (p){
		
		 
		printf("%d  ", p->Element);
		p = p->Next;
	}
	printf("\n");
}

/*
��inlistָ��ָ��ĵ�ַ������������e
*/
List InsertList(List *plist, List inlist, ElementType e){
	List p,r;
	p = (List)malloc(sizeof(LNode));
	p->Element = e;
	if (!*plist)
	{
		*plist = p;
		p->Next = NULL;
	}
	else
	{
		p->Next = inlist->Next;
		inlist->Next = p->Next;
	}
	return *plist;
}

/*��poswλ�ú����һ������indata*/
List InsertListNum(List *hlist, ElementType indata,int pos){
	List p;
	List *r;
	List hl = *hlist;
	r = hlist;
	p = (List)malloc(sizeof(LNode));
	p->Element = indata;
	if (!*hlist)
	{
		if (pos == 1)
		{
			*hlist = p;
		}
		else
			printf("����Ϊ������\n");
	}
	else
	{
		for (int i = 0; i<pos; i++)
		{
			
			(*r)= (*r)->Next;
			if (!(*r))
			{
				printf("�������\n");
			}
		}
		p->Next = (*r)->Next;
		(*r)->Next = p;
	}
	return hl;
}

/*�ж������Ƿ�Ϊ��*/
uchar IsList(List hlist){
	return hlist == NULL;
}

/*��һ���������ҵ�һ��Ԫ��X*/
Position Find(List hlist, ElementType data){
	Position p;
	p = hlist;
	while (p != NULL && p->Element!=data)
	{
		p = p->Next;
	}
	if (p==NULL)
	{
		printf("���������Ҳ�����Ԫ��");
	}
	return p;

}

/*��һ���������ҵ�ǰ�����*/
Position FindPri(List hlist, ElementType data){
	Position p, r;
	p = hlist;
	if (p->Next == NULL)
	{
		printf("����ֻ����һ������Ԫ��\n");
		return NULL;
	}
	else
	{
		while (p->Next!=NULL && p->Next->Element!= data)
		{
			p = p->Next;
		}
		if (p->Next==NULL)
		{
			printf("�Ҳ���Ԫ�ص�ǰ����");
			return NULL;
		}
		return p;
	}
}

/*ɾ��һ������*/
void DelectList(List hlist){
	Position p, tem;
	p = hlist;
	
	while (p!=NULL)
	{
		tem = p;
		p = p->Next;
		free(tem);
	}
}

