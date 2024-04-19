#include <stdio.h>
#include <stdlib.h>
#include "cQueueS.h"

int fibonacci(int n)
{
	QueueType* CQ = createCQueue();
	int n1, n2;

	if (n <= 1)
		return n; //n<2이면 연산없이 값을 return
	
	enCQueue(CQ, 0); //f_0을 enQueue
	enCQueue(CQ, 1); //f_1을 enQueue

	for (int i = 2; i <= n; i++)
	{
		n1 = deCQueue(CQ);
		n2 = peekCQ(CQ);
		enCQueue(CQ, n1 + n2); //f_n = f_(n-1) + f_(n-2) 계산
	}

	n1 = deCQueue(CQ); //queue에 f_(n-1), f_n이 남아있음
	return deCQueue(CQ); //f_n 반환
}

int main(void)
{
	printf("피보나치 수열 계산\n");

	for (int i = 0; i < 16; i++) //f_0, f_1, ... , f_15까지 계산
		printf("%d, ", fibonacci(i));
	
	printf("\n\n");

	getchar();
	return 0;
}