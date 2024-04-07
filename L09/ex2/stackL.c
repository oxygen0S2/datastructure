#include <stdio.h>
#include <stdlib.h>
#include "stackL.h"

//stack이 공백 상태인지 확인
int isStackEmpty(void)
{
	if (top == NULL)
		return 1;
	else
		return 0;
}

//stack의 top에 원소 삽입
void push(element item)
{
	stackNode* temp = (stackNode*)malloc(sizeof(stackNode));
	
	temp->data = item;
	temp->link = top; //삽입 노드를 top 위에 연결
	top = temp;
}

//stack의 top에서 원소 삭제
element pop(void)
{
	element item;
	stackNode* temp = top;

	if (isStackEmpty())
	{
		printf("\n\nStack is empty!\n");
		return 0;
	}
	else //stack이 공백 리스트인 경우
	{
		item = temp->data;
		top = temp->link; //top 위치를 삭제 노드 아래로 이동
		free(temp);
		return item; //삭제된 원소 반환
	}
}

//stack의 top 원소 검색
element peek(void)
{
	if (isStackEmpty())
	{
		printf("\n\nStack is empty!\n");
		return 0;
	}
	else
	{
		return(top->data);
	}
}

//stack의 원소를 top에서 bottom 순서로 출력
void printStack(void)
{
	stackNode* p = top;
	printf("\nSTACK [");

	while (p)
	{
		printf("%d", p->data);
		p = p->link;
	}
    
	printf("]");
}