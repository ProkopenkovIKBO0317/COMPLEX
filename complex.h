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

void print_menu(char select);

Complex print_Complex(Complex c);
Complex EnterComplex(Complex a);
complex complexSum(Complex a, Complex b);
complex complexSubstraction(Complex a, Complex b);
complex complexMultiply(Complex a, Complex b);
complex complexDivision(Complex a, Complex b);
int complexModulo(Complex a);



#endif  COMPLEX
