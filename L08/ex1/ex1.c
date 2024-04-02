#include <stdio.h>
#include "LinkedPoly.h"

//연결 리스트를 이용해 다항식 연산(덧셈)
void main(void)
{
	ListHead* A, * B, * C;

	A = createLinkedList();
	B = createLinkedList();
	C = createLinkedList();

	appendTerm(A, 4, 3); //다항식 리스트 A에 4x^3 노드 추가
	appendTerm(A, 3, 2); //다항식 리스트 A에 3x^2 노드 추가
	appendTerm(A, 5, 1); //다항식 리스트 A에 5x^1 노드 추가
	printf("\n A(x) =");
	printPoly(A);

	appendTerm(B, 3, 4); //다항식 리스트 B에 3x^4 노드 추가
	appendTerm(B, 1, 3); //다항식 리스트 B에 1x^3 노드 추가
	appendTerm(B, 2, 1); //다항식 리스트 B에 2x^1 노드 추가
	appendTerm(B, 1, 0); //다항식 리스트 B에 1x^0 노드 추가
	printf("\n B(x) =");
	printPoly(B);

	addPoly(A, B, C); //덧셈 수행
	printf("\n C(x) =");
	printPoly(C);

	getchar();
	return 0;
}