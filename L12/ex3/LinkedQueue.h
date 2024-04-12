#pragma once
typedef char element;

typedef struct QNode { //연결 queue의 노드를 구조체로 정의
	element data;
	struct QNode* link;
} QNode;

typedef struct { //연결 queue에서 사용하는 포인터 front와 rear를 구조체로 정의
	QNode* front, * rear;
} LQueueType;

LQueueType* createLinkedQueue(void);
int isLQEmpty(LQueueType* LQ);
void enLQueue(LQueueType* LQ, element item);
element deLQueue(LQueueType* LQ);
element peekLQ(LQueueType* LQ);
void printLQ(LQueueType* LQ);