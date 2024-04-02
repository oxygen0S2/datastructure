#include <stdio.h>
#include <stdlib.h>
#include "waiting.h"

//단순 연결 리스트를 활용한 '식당의 웨이팅 관리 프로그램'
int main(void)
{
	linkedList_h* L;
	listNode* p1;
	listNode* p2;

	L = createList();
	
	printf("(1) 등록 ");
	waitingReg(L, "Alice", 27747);
	printList(L);

	printf("(2) 등록 ");
	waitingReg(L, "Bob", 7821);
	printList(L);

	printf("(3) 등록 ");
	waitingReg(L, "Charlie", 4722);
	printList(L);

	printf("(4) 등록 ");
	waitingReg(L, "David", 5862);
	printList(L);

	printf("(5) 입장 ");
	customerEnter(L);
	printList(L);

	printf("(6) 등록 ");
	waitingReg(L, "Edison", 9715);
	printList(L);

	printf("(7) 입장 ");
	customerEnter(L);
	printList(L);

	printf("(8) 연기 ");
	p1 = searchNode(L, "David", NULL);
	waitingDelay(L, p1);
	printList(L);

	printf("(9) 등록 ");
	waitingReg(L, "Fiona", 3718);
	printList(L);

	printf("(10) 검색 ");
	waitingSearch(L, NULL, 9715);
	printList(L);

	printf("(11) 취소 ");
	p2 = searchNode(L, NULL, 4722);
	waitingCancel(L, p2);
	printList(L);

	printf("(12) 입장 ");
	customerEnter(L);
	printList(L);

	getchar();
	return 0;
}