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
void toString(Complex c);
void print_menu(int select);
Complex ComplexCreate(Complex c1);
Complex complexSum(Complex c1, Complex c2);



#endif  COMPLEX
