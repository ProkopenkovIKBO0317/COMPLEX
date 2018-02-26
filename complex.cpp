#include "stdafx.h"
#include "complex.h"
#include <iostream>

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

void toString(complex *c)
{
	cout << "Your complex number is (" << c->real << ';' << c->imag << ')' << endl;
}

Complex ComplexCreate(Complex c1)
{
	cout << "Enter real and imag nubmers" << endl;
	cin >> c1->real >> c1->imag;
	return c1;
}

Complex complexSum(complex *c1, complex *c2)
{
	return ComplexCreate(c1->real + c2->real, c1->imag + c2->real);
}