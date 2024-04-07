//L09 ex1의 stackS.h와 동일
#pragma once
#define STACK_SIZE 100

typedef int element; 
element stack[STACK_SIZE]; 

int isStackEmpty(void);
int isStackFull(void);
void push(element item);
element pop(void);
element peek(void);
void printStack(void);