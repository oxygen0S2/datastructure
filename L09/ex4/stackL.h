//ex3의 stackL.h와 동일
#pragma once
typedef char element;

typedef struct stackNode {
	element data;
	struct stackNode* link;
} stackNode;

stackNode* top;

int isStackEmpty(void);
void push(element item);
element pop(void);
element peek(void);
void printStack(void);