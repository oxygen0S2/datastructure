#include <stdio.h>
#include "stackS.h"

int top = -1;

//stack이 공백 상태인지 확인
int isStackEmpty(void)
{
	if (top == -1)
		return 1; //공백 상태라면 1 반환
	else
		return 0;
}

//stack이 포화 상태인지 확인
int isStackFull(void)
{
	if (top == STACK_SIZE - 1)
		return 1; //포화 상태라면 1 반환
	else
		return 0;
}

//stack의 top에 원소 삽입
void push(element item)
{
	if (isStackFull()) //stack이 포화 상태인 경우
	{
		printf("\n\nStack is FULL!\n");
		return;
	}
	else
		stack[++top] = item; //top을 증가시킨 후 현재 top에 원소 삽입
}

//stack의 top에서 원소 삭제
element pop(void)
{
	if (isStackEmpty()) //stack이 공백 상태인 경우
	{
		printf("\n\nStack is Empty!\n");
		return 0;
	}
	else
		return stack[top--]; //현재 top의 원소를 삭제한 후 top 감소
}

//stack의 top 원소 검색
element peek(void)
{
	if (isStackEmpty()) //stack이 공백 상태인 경우
	{
		printf("\n\nStack is Empty!\n");
		return 0;
	}
	else
		return stack[top]; //원소 확인
}

//stack의 원소 출력
void printStack(void)
{
	int i;
	printf("\nSTACK [");
	for (i = 0; i <= top; i++)
		printf("%d", stack[i]);
	printf("]");
}