#include <stdio.h>

//원소의 논리적 ㆍ 물리적 순서 확인
int main(void)
{
	int i, sale[4] = { 157, 209, 251, 312 };

	for (i = 0; i < 4; i++)
    {
		printf("address : %u sale[%d] = %d\n", &sale[i], i, sale[i]);
	}
	
	getchar();

	return 0;
}

/*
sale[i] = 시작 주소 + (인덱스 x 4바이트)
        = 시작 주소 + (i x 4)
*/