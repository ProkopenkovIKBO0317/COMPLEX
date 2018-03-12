#include "stdafx.h"
#include "complex.h"
#include <math.h>
#include <iostream>


using namespace std;

void print_error()
{

	cout << "Error, this symbol is not supported" << endl;

}

void print_menu(char select)
{

	cout << "Enter operation" << endl;
	cout << "------------------------" << endl;
	cout << "'+' Sum" << endl;
	cout << "'-' Substraction" << endl;
	cout << "'*' Multiplication" << endl;
	cout << "'/' Division" << endl;
	cout << "'M' or 'm' Modulo of complex number" << endl;
	cout << "------------------------" << endl;

}

complex complex::print_Complex(complex *a, complex *b)
{
	cout << "Real part is: " << a->real << endl;
	cout << "Imagine part is: " << b->imag << endl;
	cout << "Complex number is: (" << a->real << ';' << b->imag << "i)" << endl;

	return *a, *b;
}



 complex complex::EnterComplex(complex *a)
{
	cout << "Enter complex number: real/imag" << endl;
	cin >> a->real >> a->imag;

	return *a;
}

complex complex::complexSum(complex *a, complex *b)
{
	a->real = a->real + b->real;
	b->imag = a->imag + b->imag;
	return print_Complex(a,b);

}

complex complex::complexSubstraction(complex *a, complex *b)
{
	a->real = a->real - b->real;
	b->imag = a->imag - b->imag;
	return print_Complex(a,b);
}

complex complex::complexMultiply(complex *a, complex *b)
{
	a->real = (a->real * b->real - a->imag * b->imag);
	b->imag = (a->real * b->imag + b->real * a->imag);
	return print_Complex(a,b);
}

complex complex::complexDivision(complex *a, complex *b)
{
	a->real = ((a->real * b->real + a->imag * b->imag)/(b->real*b->real + b->imag*b->imag));
	b->imag = ((b->real * a->imag - a->real * b->imag) / (b->real*b->real + b->imag*b->imag));
	return print_Complex(a,b);
}

int complexModulo(complex *a)
{
	int mod;
	mod = sqrt(pow(a->real, 2) + pow(a->imag, 2));
	return mod;
}
