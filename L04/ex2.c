#include <stdio.h>

//구조체를 이용한 데이터 항목의 참조 2
struct date {
	int year;
	int month;
	int day;
};

struct account {
	struct date open;
	char name[12];
	int actnum;
	double balance;
};

int main(void)
{
	struct account acc1 = { {2024, 03, 14}, "DateAccount", 4096, 1200000 };

	printf("Size of struct account: %u\n", sizeof(acc1));
	printf("[%d, %d, %d]\n", acc1.open.year, acc1.open.month, acc1.open.day);
	printf("%s, %d, %.2f\n", acc1.name, acc1.actnum, acc1.balance);

	return 0;
}