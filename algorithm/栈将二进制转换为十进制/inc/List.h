#ifndef _LIST_H
#define _LIST_H

#include "stdio.h"
#include "stdlib.h"

typedef  int ElementType;//定义链表数据类型

typedef struct Node *PtrToNode;
typedef struct Node LNode;
typedef PtrToNode List;
typedef PtrToNode Position;

typedef  unsigned char  uchar;
/*链表数据结构*/
struct Node
{
	ElementType Element;
	Position Next;

};

List CreateList(int n); //创建n个数据的链表

List KeyCreatList();   //手动创建多个数据的链表，Ctrl+Z结束

void PrintList(List *list); //打印出链表的数据

List InsertListNum(List *hlist, ElementType indata, int pos); //在链表中的第pos位插入indata数据

/*在一个链表中找到前驱结点*/
Position FindPri(List hlist, ElementType data);

/*在一个链表中找到一个元素X*/
Position Find(List hlist, ElementType data);

/*判断链表是否为空*/
uchar IsList(List hlist);

#endif /*_LIST_H*/
