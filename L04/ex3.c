#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//화살표 연산자를 이용해 데이터 항목 참조
struct employee {
	char name[10];
	int year;
	int pay;
};

void main()
{
	struct employee Lee;
	struct employee* Sptr = &Lee;

	//strcpy: 원본 문자열로부터 다른 문자열로 데이터를 복사
	strcpy(Sptr->name, "이순신");
	Sptr->year = 2023;
	Sptr->pay = 6900;

	printf("이름: %s", Sptr->name);
	printf("\n입사: %d", Sptr->year);
	printf("\n연봉: %d", Sptr->pay);

	getchar();
}