/* Operations with vectors. */

#include "stdafx.h"
#include <iostream>
#include "vector.h"

using namespace std;

int main()
{
	double multy, number, length;
	int select = 0;
	vector v1, v2, v3;


	print_menu(select);
	cin >> select;

	switch (select)
	{
	case 1:
		cout << "Enter the vector's cooridnates x1 y1 x2 y2" << endl;
		cin >> v1.x >> v1.y >> v2.x >> v2.y;
		v3 = sum(&v1, &v2);
		toString(&v3);
		break;

	case 2:
		cout << "Enter the vector's cooridnates x1 y1 x2 y2" << endl;
		cin >> v1.x >> v1.y >> v2.x >> v2.y;
		v3 = substraction(&v1, &v2);
		toString(&v3);
		break;

	case 3:
		cout << "Enter the vector's cooridnates x1 y1 x2 y2" << endl;
		cin >> v1.x >> v1.y >> v2.x >> v2.y;
		multy = v1.x * v2.x + v1.y * v2.y;
		cout << "Multiplication =  " << multy << endl;
		break;

	case 4:
		cout << "Enter the vector x1 y1" << endl;
		cin >> v1.x >> v1.y;
		length = sqrt(v1.x*v1.x + v1.y*v1.y);
		cout << "Length is " << length << endl;
		break;

	case 5:
		cout << "Enter the vector's coordinates x1 y1" << endl;
		cin >> v1.x >> v1.y;
		cout << "Enter the number" << endl;
		cin >> number;
		v3 = multiply(&v1, number);
		toString(&v3);
		break;

	default:
		print_error();
		break;
	}

	system("pause");
}

