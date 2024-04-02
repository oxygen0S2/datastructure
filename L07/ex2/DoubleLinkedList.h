#pragma once
//이중 연결 리스트의 노드 구조를 구조체로 정의
typedef struct ListNode {
	struct ListNode* llink;
	char data[4];
	struct ListNode* rlink;
} listNode;

//리스트 시작 head 노드를 구조체로 정의
typedef struct {
	listNode* head;
} linkedList_h;

linkedList_h* createLinkedList_h(void);
void printList(linkedList_h* DL);
void insertNode(linkedList_h* DL, listNode* pre, char* x);
void deleteNode(linkedList_h* DL, listNode* old);
listNode* searchNode(linkedList_h* DL, char* x);