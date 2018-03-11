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

Complex print_Complex(Complex c)
{
	cout << "Real part is: " << c->real << endl;
	cout << "Imagine part is: " << c->imag << endl;
	cout << "Complex number is: (" << c->real << ';' << c->imag << "i)" << endl;

	return c;
}


Complex EnterComplex(Complex a)
{
	cout << "Enter complex number: real/imag" << endl;
	cin >> a->real >> a->imag;

	return a;
}

complex complexSum(Complex a, Complex b)
{
	complex c;

	c.real = a->real + b->real;
	c.imag = a->imag + b->imag;

	return c;
}

complex complexSubstraction(Complex a, Complex b)
{
	complex c;

	c.real = a->real - b->real;
	c.imag = a->imag - b->imag;

	return c;
}

complex complexMultiply(Complex a, Complex b)
{
	complex c;
	c.real = (a->real * b->real - a->imag * b->imag);
	c.imag = (a->real * b->imag + b->real * a->imag);
	return c;
}

complex complexDivision(Complex a, Complex b)
{
	complex c;
	c.real = ((a->real * b->real + a->imag * b->imag)/(b->real*b->real + b->imag*b->imag));
	c.imag = ((b->real * a->imag - a->real * b->imag) / (b->real*b->real + b->imag*b->imag));
	return c;
}

int complexModulo(Complex a)
{
	int mod;
	mod = sqrt(pow(a->real, 2)+ pow(a->imag, 2));
	return mod;
}
