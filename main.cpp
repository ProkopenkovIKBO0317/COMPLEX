#include "stdafx.h"
#include <iostream>
#include "complex.h"
#include <math.h>

using namespace std;


int main()
{
	char select = ' ';
	Complex c1 = new complex;
	Complex c2 = new complex;
	complex c3;
	double mod;


	print_menu(select);
	cin >> select;

	switch (select)
	{
	case '+':
		EnterComplex(c1);
		EnterComplex(c2);
		c3 = complexSum(c1, c2);
		print_Complex(&c3);
		break;

	case '-':
		EnterComplex(c1);
		EnterComplex(c2);
		c3 = complexSubstraction(c1, c2);
		print_Complex(&c3);
		break;

	case '*':
		EnterComplex(c1);
		EnterComplex(c2);
		c3 = complexMultiply(c1, c2);
		print_Complex(&c3);
		break;

	case '/':
		EnterComplex(c1);
		EnterComplex(c2);
		c3 = complexDivision(c1, c2);
		print_Complex(&c3);
		break;

	case 'M':
	case 'm':
		EnterComplex(c1);
		mod = complexModulo(c1);
		cout << "Modulo = " << mod << endl;
		break;

	default:
		print_error();
		break;
	}

	system("pause");
	delete c1;
	delete c2;
}










