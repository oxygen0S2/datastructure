#pragma once
#define cQ_SIZE 4

typedef char element;

typedef struct {
	element queue[cQ_SIZE]; //1차원 배열 queue 선언
	int front, rear;
} QueueType;

QueueType* createCQueue(void);
int isCQueueEmpty(QueueType* cQ);
int isCQueueFull(QueueType* cQ);
void enCQueue(QueueType* cQ, element item);
element deCQueue(QueueType* cQ);
element peekCQ(QueueType* cQ);
void printCQ(QueueType* cQ);