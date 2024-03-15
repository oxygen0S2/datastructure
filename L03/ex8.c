#include <stdio.h>

//포인터를 이용해 문자열 처리하기
void main() {
	int i;
	char string1[20] = "Dreams come true!", string2[20], * ptr1, * ptr2;
	ptr1 = string1;

	printf("string1의 주소 = %u\tptr1 = %u\n", string1, ptr1);
	printf("string1 = %s\nptr1 = %s\n", string1, ptr1);

	printf("\n%s\n", ptr1 + 7);
	ptr2 = &string1[7];
	printf("%s\n", ptr2);

	for (i = 16; i >= 0; i--) {
		//putchar: 하나의 문자를 받아서 해당 문자를 표준 출력 스트림(콘솔 창)으로 보내는 역할
		putchar(*(ptr1 + i));
	}

	for (i = 0; i < 20; i++) {
		string2[i] = *(ptr1 + i);
	}

	printf("\nstring1 = %s\n", string1);
	printf("string2 = %s\n", string2);

	*ptr1 = 'P'; *(ptr1 + 1) = 'e'; *(ptr1 + 2) = 'a'; *(ptr1 + 3) = 'c'; *(ptr1 + 4) = 'e';
	printf("\nstring1 = %s\n", string1);

	getchar();
}