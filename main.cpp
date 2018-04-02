#include "stdafx.h"
#include <iostream>
#include "complex.h"
#include <math.h>

using namespace std;


int main()
{
	char select = ' ';
	complex *c1 = new complex; // выделяем память для объектов класса complex.
	complex *c2 = new complex;
	complex *c3 = new complex;
	double *mod = new double;


	print_menu(select); // меню выбора операций
	cin >> select;

	switch (select)
	{
	case '+': //операция сложение
		c1, c2->EnterComplex(c1, c2);
		c3->complexSum(c1, c2);
		break;
		
	case '-': // операция вычитание
		c1, c2->EnterComplex(c1, c2);
		c3->complexSubstraction(c1, c2);
		break;

	case '*': // операция умножение
		c1, c2->EnterComplex(c1, c2);
		c3->complexMultiply(c1, c2);
		break;

	case '/': // операция деление
		c1, c2->EnterComplex(c1, c2);
		c3->complexDivision(c1, c2);
		break;

	case 'M': // нахождение модуля комплексного числа
	case 'm':
		c1->EnterComplex(c1);
		c1->complexModulo(c1);
		break;

	default: // вызов ошибки в случае введения неверного символа.
		print_error();
		break;
	}

	system("pause");
	delete c1; // удаляем память для объектов класса так как она является динамической.
	delete c2;
	delete c3;
	delete mod;
}





