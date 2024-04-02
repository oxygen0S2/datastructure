#pragma once
typedef struct ListNode {
	char name[10];
	int phoneNum;
	struct ListNode* link;
} listNode;

typedef struct {
	listNode* head;
} linkedList_h;

linkedList_h* createList(void);
void waitingReg(linkedList_h* L, char* n, int* p);
void customerEnter(linkedList_h* L);
int waitingSearch(linkedList_h* L, char* n, int* p);
void waitingCancel(linkedList_h* L, listNode* p);
void waitingDelay(linkedList_h* L, listNode* p);
void printList(linkedList_h* L);
listNode* searchNode(linkedList_h* L, char* n, int* p);