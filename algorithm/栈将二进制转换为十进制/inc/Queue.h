#ifndef _QUEUE_H
#define _QUEUE_H

typedef int EleType;
typedef struct Qnode QNode;
typedef struct Qnode *QNodePtr;

typedef struct Queue LinkQueue;
typedef struct Queue *QueuePtr;

/*������н��*/
typedef struct Qnode
{
	EleType data;
	QNodePtr next;
};

/*������нṹ���ͷ��β��ָ��*/
typedef struct Queue
{
	QNodePtr front;
	QNodePtr rear;
};

#endif _QUEUE_H