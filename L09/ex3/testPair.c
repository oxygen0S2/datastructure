#include <stdio.h>
#include <string.h>
#include "stackL.h"
#include "testPair.h"

//수식 괄호 검사
int testPair(char* exp)
{
	char symbol, open_pair;
	int i, length = strlen(exp); //char형 포인터 매개변수로 받은 exp 길이 계산 후 length 변수에 저장
	top = NULL;

	for (i = 0; i < length; i++)
	{
		symbol = exp[i];
		switch (symbol)
		{
		//왼쪽 괄호는 stack에 삽입
		case '(':
		case '[':
		case '{':
			push(symbol);
			break;
		//오른쪽 괄호를 읽으면
		case ')':
		case ']':
		case '}':
			if (isStackEmpty())
				return 0;
			else
			{
				open_pair = pop(); //stack에서 마지막으로 읽은 괄호를 꺼냄

				//괄호 쌍이 맞는지 검사
				if ((open_pair == '(' && symbol != ')') ||
					(open_pair == '[' && symbol != ']') ||
					(open_pair == '{' && symbol != '}'))
					return 0; //수식 오류
				else
					break; //다음 검사 계속
			}
		}
	}
	if (top == NULL) //검사 후 stack이 공백이면
		return 1; //1 반환
	else
		return 0; //괄호 오류일 때 0 반환
}