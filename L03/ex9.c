#include <stdio.h>

//포인터 배열을 이용해 문자열 저장하기
void main() {
	int i;
	char* ptrArray[4] = { {"Korea"}, {"Seoul"}, {"Mapo"}, {"152번지 2/3"} };

	for (i = 0; i < 4; i++) {
		printf("%s\n", ptrArray[i]);
	}

	//ptrArray 배열 [2]에 Jongno 저장
	ptrArray[2] = "Jongno";
	printf("\n\n");
	
	for (i = 0; i < 4; i++) {
		printf("%s\n", ptrArray[i]);
	}

	getchar();
}