#ifndef LEETCODE_06
#define LEETCODE_06

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

void QueueInti(Queue* pq);
// 队列初始化
void QueueDestory(Queue* pq);
// 队列的销毁
void QueuePush(Queue* pq, QDateType x);
// 入队
void QueuePop(Queue* pq);
// 出队
QDateType QueueFront(Queue* pq);
// 取出队首元素
int QueueSize(Queue* pq);
// 求队列的长度
_Bool QueueEmpty(Queue* pq);
// 判断队是否为空

void recentCounterinit(Queue* pq);

int recentCounterping(Queue* pq, QDateType t);



#endif