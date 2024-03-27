#include <stdio.h>
#include "addPoly.h"

//순차 리스트를 이용한 다항식의 덧셈 연산
//두 다항식 A, B를 더하여 다항식 C를 반환
int main()
{
	polynomial A = { 3, {4,3,5,0} };
	polynomial B = { 4,{3,1,0,2,1} };
	polynomial C;

	//다항식 A, B의 덧셈
	C = addPoly(A, B);

	printf("\nA(x) = ");
	printPoly(A);

	printf("\nB(x) = ");
	printPoly(B);

	printf("\nC(x) = ");
	printPoly(C);

	getchar();
	return 0;
}