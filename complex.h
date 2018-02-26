#ifndef COMPLEX_H
#define COMPLEX_H
#include <cmath>
#include <string.h>


typedef struct complex * Complex;

typedef struct complex
{
	int real;
	int imag;
}complex;

void print_error();
void print_menu(int select);
Complex ComplexCreate(double real, double imag);
Complex complexSum(complex *c1, complex *c2);



#endif  COMPLEX
