#include <stdio.h>
#include "stackS.h"

//순차 자료구조를 이용해 순차 스택 구현
int main()
{
	element item;
	printf("\n** 순차 스택 연산 **\n");
	printStack();
	push(1);
	printStack();
	push(2);
	printStack();
	push(3);
	printStack();

	item = peek();
	printStack(); //현재 top의 원소 출력
	printf("\t peek => %d", item);

	item = pop();
	printStack();
	printf("\t pop => %d", item);

	item = pop();
	printStack();
	printf("\t pop => %d", item);
	
	item = pop();
	printStack();
	printf("\t pop => %d\n", item);

	getchar();
	return 0;
}