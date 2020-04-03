#ifndef _QUEUE_H
#define _QUEUE_H

typedef int EleType;
typedef struct Qnode QNode;
typedef struct Qnode *QNodePtr;

typedef struct Queue LinkQueue;
typedef struct Queue *QueuePtr;

/*定义队列结点*/
typedef struct Qnode
{
	EleType data;
	QNodePtr next;
};

/*定义队列结构体队头队尾的指针*/
typedef struct Queue
{
	QNodePtr front;
	QNodePtr rear;
};

#endif _QUEUE_H