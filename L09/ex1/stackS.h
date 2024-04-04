#pragma once
#define STACK_SIZE 100

typedef int element; //stack element의 자료형을 int로 정의
element stack[STACK_SIZE]; //1차원 배열 stack 선언

int isStackEmpty(void);
int isStackFull(void);
void push(element item);
element pop(void);
element peek(void);
void printStack(void);