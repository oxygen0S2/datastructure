#include "queueS.h"

int main()
{
	QueueType* Q1 = createQueue(); //queue 생성
	element data;

	printf("\n ***** 순차 큐 연산 ***** \n");
	printf("\n삽입 A>>");
	enQueue(Q1, 'A');
	printQ(Q1);

	printf("\n삽입 B>>");
	enQueue(Q1, 'B');
	printQ(Q1);
	
	printf("\n삽입 C>>");
	enQueue(Q1, 'C');
	printQ(Q1);

	data = peekQ(Q1);
	printf("peek item : %c\n", data);

	printf("\n삭제 >>");
	data = deQueue(Q1);
	printQ(Q1);
	printf("\t삭제 데이터 : %c", data);

	printf("\n삭제 >>");
	data = deQueue(Q1);
	printQ(Q1);
	printf("\t\t삭제 데이터 : %c", data);

	printf("\n삭제 >>");
	data = deQueue(Q1);
	printQ(Q1);
	printf("\t\t삭제 데이터 : %c", data);

	printf("\n삽입 D>>");
	enQueue(Q1, 'D');
	printQ(Q1);

	printf("\n삽입 E>>");
	enQueue(Q1, 'E');
	printQ(Q1);

	getchar();
	return 0;
}