#include <stdio.h>
#include "stackS.h"

//L09 ex1의 stackS.c와 동일
int top = -1;

int isStackEmpty(void)
{
	if (top == -1)
		return 1; 
	else
		return 0;
}

int isStackFull(void)
{
	if (top == STACK_SIZE - 1)
		return 1; 
	else
		return 0;
}

void push(element item)
{
	if (isStackFull()) 
	{
		printf("\n\nStack is FULL!\n");
		return;
	}
	else
		stack[++top] = item; 
}

element pop(void)
{
	if (isStackEmpty()) 
	{
		printf("\n\nStack is Empty!\n");
		return 0;
	}
	else
		return stack[top--];
}

element peek(void)
{
	if (isStackEmpty()) 
	{
		printf("\n\nStack is Empty!\n");
		return 0;
	}
	else
		return stack[top]; 
}

void printStack(void)
{
	int i;
	printf("\nSTACK [");
	for (i = 0; i <= top; i++)
		printf("%d", stack[i]);
	printf("]");
}