#include <stdio.h>

//포인터 배열과 이중 포인터 사용
void main() {
	char* ptrArray[2];
	char** ptrptr;
	int i;

	ptrArray[0] = "Korea";
	ptrArray[1] = "Seoul";

	ptrptr = ptrArray;

	//ptrArray[0]
	printf("ptrArray[0]의 주소 (&ptrArray[0]) = %u\n", &ptrArray[0]);
	printf("ptrArray[0]의 값 (ptrArray[0]) = %u\n", ptrArray[0]);
	printf("ptrArray[0]의 참조값 (*ptrArray[0]) = %c\n", *ptrArray[0]);
	printf("ptrArray[0]의 참조 문자열 (*ptrArray[0]) = %s\n\n", *ptrArray);

	//ptrArray[1]
	printf("ptrArray[1]의 주소 (&ptrArray[1]) = %u\n", &ptrArray[1]);
	printf("ptrArray[1]의 값 (ptrArray[1]) = %u\n", ptrArray[1]);
	printf("ptrArray[1]의 참조값 (*ptrArray[1]) = %c\n", *ptrArray[1]);
	printf("ptrArray[1]의 참조 문자열 (*ptrArray[1]) = %s\n\n", *(ptrArray + 1));

	//ptrptr
	printf("ptrptr의 주소 (&ptrptr) = %u\n", &ptrptr);
	printf("ptrptr의 값 (ptrptr) = %u\n", ptrptr);
	printf("ptrptr의 1차 참조값 (*ptrptr) = %u\n", *ptrptr);
	printf("ptrptr의 2차 참조값 (**ptrptr) = %c\n", **ptrptr);
	printf("ptrptr의 2차 참조 문자열 (**ptrptr) = %s\n", *ptrptr);

	printf("\n*ptrArray[0]: ");

	for (i = 0; i < 5; i++)
		printf("%c", *(ptrArray[0] + i));
	printf("\n**ptrptr: ");

	for (i = 0; i < 5; i++)
		printf("%c", *(*ptrptr + i));
	printf("\n\n*ptrArray[1]: ");
	
	for (i = 0; i < 5; i++)
		printf("%c", *(ptrArray[1] + i));
	printf("\n**(ptrptr+1): ");
	
	for (i = 0; i < 5; i++)
		printf("%c", *(*(ptrptr + 1) + i));

	getchar();
}