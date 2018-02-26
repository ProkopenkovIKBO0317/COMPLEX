#include "stdafx.h"
#include "vector.h"
#include <iostream>

using namespace std;

void print_error()
{
	cout << "Error, restart the program!" << endl;
}

void print_menu(int select)
{
	cout << "Enter operation" << endl;
	cout << "__________________________________" << endl;
	cout << "1. Sum" << endl;
	cout << "2. Substraction" << endl;
	cout << "3. Multiplication vector & vector" << endl;
	cout << "4. Length of vector" << endl;
	cout << "5. Multiplication vector & number" << endl;
	cout << "__________________________________" << endl;
}

void toString(vector *v)
{
	cout << "Your vector is (" << v->x << ';' << v->y << ')' << endl;
}

vector sum(vector *v1, vector *v2)
{
	vector v;
	v.x = v1->x + v2->x;
	v.y = v1->x + v2->y;
	return v;
}



vector substraction(vector *v1, vector *v2)
{
	vector v;
	v.x = v1->x - v2->x;
	v.y = v1->x - v2->y;
	return v;
}

vector multiply(vector *v1, double n)
{
	vector v;
	v.x = v1->x * n;
	v.y = v1->y * n;
	return v;
}

