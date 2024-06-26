#include <stdio.h>
#include "CircularLinkedList.h"

//원형 연결 리스트에서 노드 삽입ㆍ삭제ㆍ탐색하기
int main(void)
{
	linkedList_h* CL;
	listNode* p;

	CL = createLinkedList_h(); //공백 원형 연결 리스트 생성
	printf("(1)원형 연결 리스트 생성\n");
	printList(CL);

	printf("\n(2)원형 연결 리스트에 [월] 노드 삽입\n");
	insertFirstNode(CL, "월");
	printList(CL);

	printf("\n(3)원형 연결 리스트의 [월] 노드 뒤에 [수] 노드 삽입\n");
	p = searchNode(CL, "월");
	insertMiddleNode(CL, p, "수");
	printList(CL);

	printf("\n(4)원형 연결 리스트의 [수] 노드 뒤에 [금] 노드 삽입\n");
	p = searchNode(CL, "수");
	insertMiddleNode(CL, p, "금");
	printList(CL);

	printf("\n(5)원형 연결 리스트에서 [수] 노드 삭제\n");
	p = searchNode(CL, "수");
	deleteNode(CL, p);
	printList(CL);

	getchar();
	return 0;
}