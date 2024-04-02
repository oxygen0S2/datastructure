#include <stdio.h>

/*
#1 두 3x3 행렬 A, B에 대한 곱셈을 수행하는 C코드를 작성하시오.
- 각 행렬은 1차원 배열로 구현 (A, B, C = A * B)
- A, B는 선언 단계에서 입력값으로 초기화
- 연산 결과인 C를 화면에 출력
*/
void mulMatrix(int matrix1[], int matrix2[], int res[]);

int main()
{
	int A[] = { 2, -1, 3, 3, 2, -2, 1, 3, 1 };
	int B[] = { 1, 2, -1, 2, 3, 1, -2, 4, 3 };
	int C[9] = { 0 };

	mulMatrix(A, B, C);

	printf("<<result C>>");

	for (int i = 0; i < 3; i++)
	{
		printf("\n|%3d %3d %3d |", C[3 * i], C[3 * i + 1], C[3 * i + 2]);
	}

	return 0;

}

//행렬의 곱셈 수행 함수
void mulMatrix(int matrix1[], int matrix2[], int res[])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				res[3 * i + j] += matrix1[3 * i + k] * matrix2[3 * k + j];
			}
		}
	}
}