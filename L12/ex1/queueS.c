#include <stdio.h>
#include <stdlib.h>
#include "queueS.h"

//공백 순차 queue 생성
QueueType* createQueue(void)
{
	QueueType* Q;
	Q = (QueueType*)malloc(sizeof(QueueType));
	Q->front = -1;
	Q->rear = -1;
	return Q;
}

//순차 queue가 공백 queue인지 검사
int isQueueEmpty(QueueType* Q)
{
	if (Q->front == Q->rear)
	{
		printf("Queue is empty! \n\t");
		return 1;
	}
	else
		return 0;
}

//순차 queue가 포화 상태인지 검사
int isQueueFull(QueueType* Q)
{
	if (Q->rear == Q_SIZE - 1)
	{
		printf("Queue is full! \n\t");
		return 1;
	}
	else
		return 0;
}

//순차 queue의 rear에 원소 삽입
void enQueue(QueueType* Q, element item)
{
	if (isQueueFull(Q))
		return;
	else
	{
		Q->rear++;
		Q->queue[Q->rear] = item;
	}
}

//순차 queue의 front에서 원소 삭제
element deQueue(QueueType* Q)
{
	if (isQueueEmpty(Q))
		return;
	else
	{
		Q->front++;
		return Q->queue[Q->front];
	}
}

//순차 queue의 가장 앞에 있는 원소 검색
element peekQ(QueueType* Q)
{
	if (isQueueEmpty(Q))
		return;
	else return Q->queue[Q->front + 1];
}

//순차 queue의 원소 출력
void printQ(QueueType* Q)
{
	int i;
	printf("Queue : [");

	for (i = Q->front + 1; i <= Q->rear; i++)
		printf("%3c", Q->queue[i]);

	printf(" ]");
}