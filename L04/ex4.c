#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//재귀호출을 이용해 팩토리얼 값 구하기
long int fact(int);

void main()
{
	int n, result;

	printf("\n정수를 입력하세요: ");
	scanf("%d", &n);

	result = fact(n);
	printf("\n\n%d의 팩토리얼 값은 %ld입니다.\n", n, result);

	getchar();
}

long int fact(int n)
{
	int value;

	if (n <= 1) {
		printf("\nfact(1) 함수 호출!");
		printf("\nfact(1) 값 1 반환!");
		return 1;
	}
	
	else {
		printf("\nfact(%d) 함수 호출!", n);
		value = (n * fact(n - 1));
		printf("\nfact(%d) 값 %ld 반환!", n, value);
		return value;
	}
}