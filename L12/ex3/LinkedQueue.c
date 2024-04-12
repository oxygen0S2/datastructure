#include <stdio.h>
#include <stdlib.h>
#include "LinkedQueue.h"

//공백 연결 queue 생성
LQueueType* createLinkedQueue(void)
{
	LQueueType* LQ;
	LQ = (LQueueType*)malloc(sizeof(LQueueType));
	LQ->front = NULL;
	LQ->rear = NULL;
	return LQ;
}

//연결 queue가 공백 상태인지 검사
int isLQEmpty(LQueueType* LQ)
{
	if (LQ->front == NULL)
	{
		printf("Linked Queue is empty!");
		return 1;
	}
	else
		return 0;
}

//연결 queue의 rear에 원소 삽입
void enLQueue(LQueueType* LQ, element item)
{
	QNode* newNode = (QNode*)malloc(sizeof(QNode));
	newNode->data = item;
	newNode->link = NULL;

	if (LQ->front == NULL) //연결 queue가 공백 상태인 경우
	{
		LQ->front = newNode;
		LQ->rear = newNode;
	}
	else //공백 상태가 아닌 경우
	{
		LQ->rear->link = newNode;
		LQ->rear = newNode;
	}
}

//연결 queue에서 원소 삭제, 반환
element deLQueue(LQueueType* LQ)
{
	QNode* old = LQ->front;
	element item;

	if (isLQEmpty(LQ))
		return;
	else
	{
		item = old->data;
		LQ->front = LQ->front->link;

		if (LQ->front == NULL)
			LQ->rear = NULL;

		free(old);
		return item;
	}
}

//연결 queue에서 원소 검색
element peekLQ(LQueueType* LQ)
{
	element item;
	
	if (isLQEmpty(LQ))
		return;
	else
	{
		item = LQ->front->data;
		return item;
	}
}

//연결 queue의 원소 출력
void printLQ(LQueueType* LQ)
{
	QNode* temp = LQ->front;
	printf("Linked Queue : [");

	while (temp)
	{
		printf("%3c", temp->data);
		temp = temp->link;
	}
	
	printf(" ]");
}