#ifndef COMPLEX_H
#define COMPLEX_H
#include <cmath>
#include <string.h>

class complex
{
public:
	double real;
	double imag;

	complex print_Complex(complex *a, complex *b);
	complex EnterComplex(complex *a);
	complex complexSum(complex *a, complex *b);
	complex complexSubstraction(complex *a, complex *b);
	complex complexMultiply(complex *a, complex *b);
	complex complexDivision(complex *a, complex *b);


};

int complexModulo(complex *a);
void print_error();
void print_menu(char select);

#endif  COMPLEX
