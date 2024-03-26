#pragma once
//행렬 원소 저장
typedef struct {
	int row;
	int col;
	int value;
} term;

void smTranspose(term a[], term b[]);