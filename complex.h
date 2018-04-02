#ifndef COMPLEX_H
#define COMPLEX_H
#include <cmath>
#include <string.h>

class complex
{
private:
	double real;
	double imag;
	double mod;
public:
	complex print_Complex(complex *a, complex *b);
	complex EnterComplex(complex *a);
	complex EnterComplex(complex *a, complex *b);
	complex complexSum(complex *a, complex *b);
	complex complexSubstraction(complex *a, complex *b);
	complex complexMultiply(complex *a, complex *b);
	complex complexDivision(complex *a, complex *b);
	double complexModulo(complex *a);

	



};

void print_error();
void print_menu(char select);

#endif  COMPLEX
