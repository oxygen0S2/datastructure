#include "LinkedQueue.h"

//연결 자료구조를 이용해 연결 queue 구현
int main()
{
	LQueueType* LQ = createLinkedQueue();
	element data;

	printf("\n ***** 연결 큐 연산 ***** \n");
	printf("\n삽입 A>>");
	enLQueue(LQ, 'A');
	printLQ(LQ);

	printf("\n삽입 B>>");
	enLQueue(LQ, 'B');
	printLQ(LQ);

	printf("\n삽입 C>>");
	enLQueue(LQ, 'C');
	printLQ(LQ);

	data = peekLQ(LQ);
	printf("\tpeek item : %c\n", data);

	printf("\n삭제 >>");
	data = deLQueue(LQ);
	printLQ(LQ);
	printf("\t\t삭제 데이터 : %c", data);

	printf("\n삭제 >>");
	data = deLQueue(LQ);
	printLQ(LQ);
	printf("\t\t삭제 데이터 : %c", data);

	printf("\n삭제 >>");
	data = deLQueue(LQ);
	printLQ(LQ);
	printf("\t\t삭제 데이터 : %c", data);
	
	printf("\n삽입 D>>");
	enLQueue(LQ, 'D');
	printLQ(LQ);

	printf("\n삽입 E>>");
	enLQueue(LQ, 'E');
	printLQ(LQ);

	getchar();
	return 0;
}