#include <stdio.h>
#include "./07_Number_of_Recent_Calls.h"
#include <stdlib.h>
#include <stdbool.h>

//队列
typedef int QDateType;//队列存储数据类型

typedef struct QueueNode //队列元素节点
{
	QDateType val;
	struct QueueNode* next;
}QueueNode;

typedef	struct Queue //队列
{
	QueueNode* head;
	QueueNode* tail;
}Queue;


// 队列初始化
void QueueInti(Queue* pq)
{
	assert(pq); //防止pq为空指针
	pq->head = pq->tail =NULL;
}

void recentCounterinit(Queue* pq)
	{
		QueueInti(pq);
	}


int recentCounterping(Queue* pq, QDateType t)
{
	int count = 0;
	QueuePush(pq, t);
	QueueNode * cur = pq->head;
	while(cur != NULL )
	{
		if((cur->val <= t)&&(cur->val >= t-3000))
		{
			count ++;
		}
		cur  = cur->next;
	}

	return count;
}


void QueueDestory(Queue* pq)
{
	assert(pq); //防止pq为空指针
	QueueNode* cur = pq->head;
	while (cur)
	{
		QueueNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->tail = pq->head = NULL;
}

void QueuePush(Queue* pq, QDateType x)
{
	assert(pq); //防止pq为空指针

	QueueNode* newNode = (QueueNode*)malloc(sizeof(QueueNode));
	if (NULL == newNode)
	{
		printf("malloc error\n");
		exit(-1);
	}
	newNode->val = x;
	newNode->next = NULL;//开辟一个新节点存储数据

	if (pq->tail == NULL)//判断是否为空队列
	{
		assert(pq->head == NULL);
		pq->head = pq->tail = newNode;
	}
	else
	{
		pq->tail->next = newNode;
		pq->tail = newNode;
	}
}

void QueuePop(Queue* pq)
{
	assert(pq);//防止pq为空指针
	assert(pq->head && pq->tail); //防止队列为空队列
	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	else
	{
		QueueNode* next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}
}

QDateType QueueFront(Queue* pq)
{
	assert(pq);//防止pq为空指针
	assert(pq->head && pq->tail); //防止队列为空队列

	return pq->head->val;
}

bool QueueEmpty(Queue* pq)
{
	assert(pq);

	return pq->head == NULL;
}

int QueueSize(Queue* pq)
{
	assert(pq);
	QueueNode* cur = pq->head;
	int count = 0;
	while (cur)
	{
		cur = cur->next;
		count++;
	}
	return count;
}
