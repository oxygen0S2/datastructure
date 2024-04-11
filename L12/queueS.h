#pragma once
#define Q_SIZE 4

typedef char element; //queue 원소(element)의 자료형을 char로 정의

typedef struct {
	element queue[Q_SIZE]; //1차원 배열 queue 선언
	int front, rear;
} QueueType;

QueueType* createQueue(void);
int isQueueEmpty(QueueType* Q);
int isQueueFull(QueueType* Q);
void enQueue(QueueType* Q, element item);
element deQueue(QueueType* Q);
element peekQ(QueueType* Q);
void printQ(QueueType* Q);