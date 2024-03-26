#include <stdio.h>
#include "listS.h"

//선형 리스트에 원소 삽입, 삭제
int main(void)
{
	int list[MAX] = { 10, 20, 40, 50, 60, 70 };
	int i, move, size = 6;

	printf("삽입 전 선형 리스트 : ");

	for (i = 0; i < size; i++)
		printf("%3d ", list[i]);

	printf("\n원소의 갯수 : %d \n", size);
	
    //원소 삽입
	move = insertElement(list, size, 30);

	printf("\n삽입 후 선형 리스트 : ");

	for (i = 0; i <= size; i++)
		printf("%3d ", list[i]);

	printf("\n원소의 갯수 : %d ", ++size);
	printf("\n자리 이동 횟수 : %d \n", move);

    //원소 삭제
	move = deleteElement(list, size, 30);

	if (move == size)
		printf("\n선형 리스트에 원소가 없어서 삭제할 수 없습니다.\n");
	else
	{
		printf("\n삭제 후 선형 리스트 : ");

		for (i = 0; i < size - 1; i++)
			printf("%3d", list[i]);

		printf("\n원소의 갯수 : %d ", --size);
		printf("\n자리 이동 횟수 : %d \n", move);
	}

	getchar();
	return 0;
}