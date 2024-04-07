#include <stdio.h>
#include "stackL.h"
#include "evalPostfix.h"

//수식을 후위 표기법으로 연산
int main()
{
	int result;
	char* express = "35*62/-";
	printf("후위 표기식 : %s", express);

	result = evalPostfix(express);
	printf("\n\n연산 결과 => %d\n", result);

	getchar();
	return 0;
}