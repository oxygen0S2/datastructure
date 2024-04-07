#include <stdio.h>
#include "stackL.h"

//연결 자료구조를 이용해 연결 스택 구현
int main()
{
	element item;
	top = NULL;
	printf("\n** 연결 스택 연산 **\n");
	printStack();

	push(1);
	printStack();
	push(2);
	printStack();
	push(3);
	printStack();

	item = peek();
	printStack();
	printf("\tpeek => %d", item);

	item = pop();
	printStack();
	printf("\tpop => %d", item);

	item = pop();
	printStack();
	printf("\tpop => %d", item);

	item = pop();
	printStack();
	printf("\tpop => %d", item);

	getchar();
	return 0;
}