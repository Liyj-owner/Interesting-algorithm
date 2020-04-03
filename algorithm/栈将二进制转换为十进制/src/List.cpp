#include "List.h"

/*创建链表
	链表数据个数n;
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
  键盘输入创建链表
*/

List KeyCreatList(){
	List p, r = NULL, pList = NULL;
	int data,i=0;
	printf("请输入第%d个数字:",++i);
	//scanf("%d", &data);
	while (scanf("%d", &data)!=EOF)
	{

		printf("\n请输入第%d个数字:", ++i);
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
在inlist指针指向的地址后面后插入数据e
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

/*在posw位置后插入一个数据indata*/
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
			printf("链表为空链表\n");
	}
	else
	{
		for (int i = 0; i<pos; i++)
		{
			
			(*r)= (*r)->Next;
			if (!(*r))
			{
				printf("插入错误\n");
			}
		}
		p->Next = (*r)->Next;
		(*r)->Next = p;
	}
	return hl;
}

/*判断链表是否为空*/
uchar IsList(List hlist){
	return hlist == NULL;
}

/*在一个链表中找到一个元素X*/
Position Find(List hlist, ElementType data){
	Position p;
	p = hlist;
	while (p != NULL && p->Element!=data)
	{
		p = p->Next;
	}
	if (p==NULL)
	{
		printf("在链表中找不到该元素");
	}
	return p;

}

/*在一个链表中找到前驱结点*/
Position FindPri(List hlist, ElementType data){
	Position p, r;
	p = hlist;
	if (p->Next == NULL)
	{
		printf("表中只存在一个数据元素\n");
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
			printf("找不到元素的前驱点");
			return NULL;
		}
		return p;
	}
}

/*删除一个链表*/
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

