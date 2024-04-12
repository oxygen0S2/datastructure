#include <stdio.h>
#include <stdlib.h>
#include "cQueueS.h"

//공백 원형 queue 생성
QueueType* createCQueue(void)
{
	QueueType* cQ;
	cQ = (QueueType*)malloc(sizeof(QueueType));
	cQ->front = 0;
	cQ->rear = 0;
	return cQ;
}

//원형 queue가 공백 상태인지 검사
int isCQueueEmpty(QueueType* cQ)
{
	if (cQ->front == cQ->rear)
	{
		printf("Circular Queue is empty!");
		return 1;
	}
	else
		return 0;
}

//원형 queue가 포화 상태인지 검사
int isCQueueFull(QueueType* cQ)
{
	if (((cQ->rear + 1) % cQ_SIZE) == cQ->front)
	{
		printf("Circular Queue is full!");
		return 1;
	}
	else
		return 0;
}

//원형 queue의 rear에 원소 삽입
void enCQueue(QueueType* cQ, element item)
{
	if (isCQueueFull(cQ))
		return;
	else
	{
		cQ->rear = (cQ->rear + 1) % cQ_SIZE;
		cQ->queue[cQ->rear] = item;
	}
}

//원형 queue의 front에서 원소 삭제, 반환
element deCQueue(QueueType* cQ)
{
	if (isCQueueEmpty(cQ))
		return;
	else
	{
		cQ->front = (cQ->front + 1) % cQ_SIZE;
		return cQ->queue[cQ->front];
	}
}

//원형 queue의 가장 앞에 있는 원소 검색
element peekCQ(QueueType* cQ)
{
	if (isCQueueEmpty(cQ))
		return;
	else
		return cQ->queue[(cQ->front + 1) % cQ_SIZE];
}

//원형 queue의 원소 출력
void printCQ(QueueType* cQ)
{
	int i, first, last;
	first = (cQ->front + 1) % cQ_SIZE;
	last = (cQ->rear + 1) % cQ_SIZE;

	printf("Circular Queue : [");
	i = first;

	while (i != last)
	{
		printf("%3c", cQ->queue[i]);
		i = (i + 1) % cQ_SIZE;
	}

	printf(" ]");
}