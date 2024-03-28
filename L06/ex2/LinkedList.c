#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"

//리스트에서 노드 p를 삭제
void deleteNode(linkedList_h* L, listNode* p)
{
	listNode* pre;

	if (L->head == NULL) return;

	if (L->head->link == NULL)
	{
		free(L->head);
		L->head = NULL;
		return;
	}
	else if (p == NULL) return;
	else
	{
		pre = L->head;
		while (pre->link != p)
		{
			pre = pre->link;
		}
		pre->link = p->link;
		free(p);
	}
}

//리스트에서 x 노드를 탐색하는 연산
listNode* searchNode(linkedList_h* L, char* x)
{
	listNode* temp;
	temp = L->head;
	while (temp != NULL) {
		if (strcmp(temp->data, x) == 0) return temp;
		else temp = temp->link;
	}
	return temp;
}

//리스트의 노드 순서를 역순으로 바꾸는 연산
void reverse(linkedList_h* L)
{
	listNode* p;
	listNode* q;
	listNode* r;

	p = L->head; //포인터 p를 첫 번째 노드에 설정
	q = NULL;
	r = NULL;

    //리스트의 첫 번째 노드부터 링크를 따라 다음 노드로 이동하면서 노드 간의 연결을 바꿈
	while (p != NULL) {
		r = q;
		q = p;
		p = p->link;
		q->link = r;
	}

	L->head = q;
}