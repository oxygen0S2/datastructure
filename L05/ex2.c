#include <stdio.h>

//2차원 배열의 논리적 ㆍ 물리적 순서 확인
int main(void)
{
	int i, n = 0, * ptr;
	int sale[2][4] = { {63, 84, 140, 130}, {157, 209, 251, 312} };

	//첫 번째 원소의 주소
	ptr = &sale[0][0];
	for (i = 0; i < 8; i++)
	{
		printf("address : %u sale %d = %d\n", ptr, i, *ptr);
		ptr++;
	}

	getchar();
	return 0;
}