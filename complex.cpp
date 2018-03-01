#include "stdafx.h"
#include "complex.h"
#include <iostream>
#include <math.h>


using namespace std;

void print_error()
{

	cout << "Error, restart the program!" << endl;

}

void print_menu(int select)
{

	cout << "Enter operation" << endl;
	cout << "------------------------" << endl;
	cout << "1. Sum" << endl;
	cout << "2. Substraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "5. Exponentiation" << endl;
	cout << "------------------------" << endl;

}

Complex print_Complex(Complex c)
{
	cout << "Complex number is (" << c->real << ';' << c->imag << ')' << endl;

	return c;
}

complex EnterComplex(Complex a, Complex b)
{
	cout << "Enter the first complex number: real/imag" << endl;
	cin >> a->real >> a->imag;

	cout << "Enter the second complex number: real/imag" << endl;
	cin >> b->real >> b->imag;

	return *a, *b;
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

double complexMultiply(Complex a, Complex b)
{
	double c;
	c = (a->real * b->real - a->imag * b->imag) + (a->real * b->imag + b->real * a->imag);
		return c;
}
 
