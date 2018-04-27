#include "stdafx.h"
#include "complex.h"
#include <math.h>
#include <iostream>


using namespace std;

Complex::Complex() // ����������� ������
{
	setlocale(LC_ALL, "ru");
	this->real = 0.0;
	this->imag = 0.0;
	this->mod = 0.0;
}

Complex::~Complex() // ���������� ������.
{
	setlocale(LC_ALL, "ru");
}



// ��������� ������� ���������.

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

Complex Complex::printComplex(Complex *a, Complex *b)
{
	cout << "Real part is: " << a->real << endl;
	cout << "Imagine part is: " << b->imag << endl;
	cout << "Complex number is: (" << a->real << ';' << b->imag << "i)" << endl;

	return *a, *b;
}

 Complex Complex::EnterComplex(Complex *a)
{
	cout << "Enter complex number: real/imag" << endl;
	cin >> a->real >> a->imag;

	return *a;
} 

 Complex Complex::EnterComplex(Complex *a, Complex *b)
 {
	 cout << "Enter the first complex number: real/imag" << endl;
	 cin >> a->real >> a->imag;
	 cout << "Enter the second complex number: real/imag" << endl;
	 cin >> b->real >> b->imag;

	 return *a, *b;
 }

Complex Complex::complexSum(Complex *a, Complex *b)
{
	a->real = a->real + b->real;
	b->imag = a->imag + b->imag;
	return printComplex(a,b);

}

Complex Complex::complexSubstraction(Complex *a, Complex *b)
{
	a->real = a->real - b->real;
	b->imag = a->imag - b->imag;
	return printComplex(a,b);
}

Complex Complex::complexMultiply(Complex *a, Complex *b)
{
	a->real = (a->real * b->real - a->imag * b->imag);
	b->imag = (a->real * b->imag + b->real * a->imag);
	return printComplex(a,b);
}

Complex Complex::complexDivision(Complex *a, Complex *b)
{
	a->real = ((a->real * b->real + a->imag * b->imag)/(b->real*b->real + b->imag*b->imag));
	b->imag = ((b->real * a->imag - a->real * b->imag) / (b->real*b->real + b->imag*b->imag));
	return printComplex(a,b);
}

double Complex::complexModulo(Complex *a) 
{
	mod = sqrt(pow(a->real, 2) + pow(a->imag, 2));
	cout << "Modulo is = " << mod << endl;
	return mod;
}
