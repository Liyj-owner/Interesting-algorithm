#ifndef _LIST_H
#define _LIST_H

#include "stdio.h"
#include "stdlib.h"

typedef  int ElementType;//����������������

typedef struct Node *PtrToNode;
typedef struct Node LNode;
typedef PtrToNode List;
typedef PtrToNode Position;

typedef  unsigned char  uchar;
/*�������ݽṹ*/
struct Node
{
	ElementType Element;
	Position Next;

};

List CreateList(int n); //����n�����ݵ�����

List KeyCreatList();   //�ֶ�����������ݵ�����Ctrl+Z����

void PrintList(List *list); //��ӡ�����������

List InsertListNum(List *hlist, ElementType indata, int pos); //�������еĵ�posλ����indata����

/*��һ���������ҵ�ǰ�����*/
Position FindPri(List hlist, ElementType data);

/*��һ���������ҵ�һ��Ԫ��X*/
Position Find(List hlist, ElementType data);

/*�ж������Ƿ�Ϊ��*/
uchar IsList(List hlist);

#endif /*_LIST_H*/
