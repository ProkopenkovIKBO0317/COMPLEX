#include "stdafx.h"
#include <iostream>
#include "complex.h"
#include <math.h>

using namespace std;


int main()
{
	int select = 0;
	Complex c1 = 0;

	print_menu(select);
	cin >> select;

	switch (select)
	{
	case 1:
		ComplexCreate(c1->real, c1->imag);
		toString(c1);
		break;

	case 2:
		break;

	case 3:
		break;

	case 4:
		break;

	case 5:
		break;

	default:
		print_error();
		break;
	}

	system("pause");
}




