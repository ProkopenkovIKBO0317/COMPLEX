#ifndef COMPLEX_H
#define COMPLEX_H
#include <cmath>
#include <string.h>

typedef struct complex * Complex;

typedef struct complex
{
	double real;
	double imag;
}complex;

void print_error();

void print_menu(int select);

Complex print_Complex(Complex c);
complex EnterComplex(Complex a, Complex b);
complex complexSum(Complex a, Complex b);
complex complexSubstraction(Complex a, Complex b);
double complexMultiply(Complex a, Complex b);



#endif  COMPLEX
