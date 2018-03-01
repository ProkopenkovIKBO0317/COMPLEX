#include "stdafx.h"
#include <iostream>
#include "complex.h"
#include <math.h>

using namespace std;


int main()
{
	int select = 0;
	complex c1, c2, c3;

	print_menu(select);
	cin >> select;

	switch (select)
	{
	case 1:
		EnterComplex(&c1, &c2);
		c3 = complexSum(&c1, &c2);
		print_Complex(&c3);
		break;

	case 2:
		EnterComplex(&c1, &c2);
		c3 = complexSubstraction(&c1, &c2);
		print_Complex(&c3);
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





