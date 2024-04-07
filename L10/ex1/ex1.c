#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "stackS.h"

//십진법에서 진법 변환
int main()
{
	int input, base;
	
	printf("진법을 변환할 정수를 입력하시오 : ");
	scanf("%d", &input);
	printf("변환할 진법을 선택하시오 : ");
	scanf("%d", &base);

	while (input != 0)
	{
		push(input % base);
		input = input / base;
	}

	printf("\n\n%d진법 변환 결과 = ", base);

	while (isStackEmpty() != 1)
		printf("%d", pop());

	printf("\n\n");
	getchar();
	return 0;
}