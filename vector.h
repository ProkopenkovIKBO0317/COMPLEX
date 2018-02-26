#ifndef VECOR_H
#define VECOTR_H
#include <cmath>
#include <string.h>

typedef struct vector
{
	int x;
	int y;
}vector;

void print_menu(int select);
void print_error();
void toString(vector *v);
vector sum(vector* a, vector* b);
vector substraction(vector *a, vector *b);
vector multiply(vector *v1, double n);
// vector multiplyNumber(double n, vector *v1);

#endif VECTOR_H

