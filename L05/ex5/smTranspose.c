#include "smTranspose.h"

void smTranspose(term a[], term b[])
{
	int m, n, v, i, j, p;

	m = a[0].row; //희소행렬 a의 행 수
	n = a[0].col; //희소행렬 a의 열 수
	v = a[0].value; //희소행렬 a에서 0이 아닌 원소의 수

	b[0].row = n; //전치행렬 b의 행 수
	b[0].col = m; //전치행렬 b의 열 수
	b[0].value = v; //전치행렬 b의 원소 수

	//0이 아닌 원소가 있는 경우에만 전치 연산 수행
	if (v > 0)
	{
		p = 1;

		//희소행렬 a의 열별로 전치 반복 수행
		for (i = 0; i < n; i++)
		{
			//0이 아닌 원소 수에 대해서만 반복 수행
			for (j = 1; j <= v; j++)
			{
				//현재의 열에 속하는 원소가 있으면 b[]에 삽입
				if (a[j].col == i)
				{
					b[p].row = a[j].col;
					b[p].col = a[j].row;
					b[p].value = a[j].value;
					p++;
				}
			}
		}
	}
}