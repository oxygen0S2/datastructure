#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "waiting.h"

//공백 리스트 생성 함수
linkedList_h* createList(void)
{
	linkedList_h* L;
	L = (linkedList_h*)malloc(sizeof(linkedList_h));
	L->head = NULL;
	return L;
}

//웨이팅 등록 함수
void waitingReg(linkedList_h* L, char* n, int* p)
{
	listNode* newNode;
	listNode* temp;

	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->name, n);
	newNode->phoneNum = p;
	newNode->link = NULL;

	if (L->head == NULL)
	{
		L->head = newNode;
		return;
	}

	temp = L->head;

	while (temp->link != NULL)
		temp = temp->link;

	temp->link = newNode;
}

//손님 입장 함수
void customerEnter(linkedList_h* L)
{
	listNode* temp;

	if (L->head == NULL)
		return;

	temp = L->head;
	L->head = L->head->link;
	free(temp);
}

//웨이팅 검색 함수
int waitingSearch(linkedList_h* L, char* n, int* p)
{
	listNode* temp;
	int num = 0; //순번 출력

	temp = L->head;

	while (temp != NULL)
	{
		num++;

		if (n == NULL && p != NULL) //전화번호만 입력했을 때
		{
			if (temp->phoneNum == p)
				return printf("--> 앞에서 %d번째\n", num);
			else
				temp = temp->link;
		}

		else if (n != NULL && p == NULL) //이름만 입력했을 때
		{
			if (strcmp(temp->name, n) == 0)
				return printf("--> 앞에서 %d번째\n", num);
			else
				temp = temp->link;
		}
	}

	return -1;
}

//웨이팅 취소 함수
void waitingCancel(linkedList_h* L, listNode* p)
{
	listNode* pre;
	pre = L->head;

	if (L->head == NULL)
		return;

	if (L->head == p)
	{
		L->head = p->link; 
		free(p); 
		return;
	}

	while (pre != NULL && pre->link != p)
	{
		pre = pre->link;
	}

	if (pre == NULL)
		return;

	pre->link = p->link;
	free(p);
}

//웨이팅 연기 함수
void waitingDelay(linkedList_h* L, listNode* p)
{
	listNode* pre; //이전 노드
	listNode* current; //현재 노드
	listNode* next; //다음 노드

	pre = NULL;
	current = L->head;
	next = p->link;

	if (p == NULL || p->link == NULL)
		return;

	//노드 p를 찾기 위해 탐색
	while (current != NULL && current != p)
	{
		pre = current;
		current = current->link;

		if (current->link == NULL)
			return;
	}

	//p를 다음으로(뒤로) 이동 후 그 위치에 삽입
	p->link = next->link;
	next->link = p;

	if (pre != NULL) //이전 노드가 있다면
		pre->link = next;
	else //이전 노드가 없다면
		L->head = next;
}

//리스트 출력 함수
void printList(linkedList_h* L)
{
	listNode* p;
	p = L->head;

	printf("--> ");

	if (p == NULL)
	{
		printf("\n");
		return;
	}

	while (p != NULL)
	{
		printf("(%s, %d)", p->name, p->phoneNum);
		p = p->link;

		if (p != L->head)
			printf("-");
	}

	printf("\n");
}

//노드 탐색 함수
listNode* searchNode(linkedList_h* L, char* n, int* p)
{
	listNode* temp;
	temp = L->head;

	while (temp != NULL)
	{
		if (n == NULL && p != NULL) //전화번호만 입력했을 때
		{
			if (temp->phoneNum == p)
				return temp;
			else
				temp = temp->link;
		}
		else if (n != NULL && p == NULL) //이름만 입력했을 때
		{
			if (strcmp(temp->name, n) == 0)
				return temp;
			else
				temp = temp->link;
		}
	}

	return temp;
}