#include <stdio.h>

//입력한 문자열의 길이 계산
void main() {
	int i, length = 0;
	char str[50];
	printf("문자열을 입력하세요: ");
	gets(str);
	printf("입력된 문자열은 \n\"");

	for (i = 0; str[i]; i++) {
		printf("%c", str[i]);
		length += 1;
	}

	printf("\" \n입니다.");
	printf("\n\n입력된 문자열의 길이 = %d\n", length);

	getchar();
}