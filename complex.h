#include <cmath>
#include <string.h>


class Complex
{
private:
	double real;
	double imag;
	double mod;
public:
	Complex();
	Complex printComplex(Complex *a, Complex *b);
	Complex EnterComplex(Complex *a);
	Complex EnterComplex(Complex *a, Complex *b);
	Complex complexSum(Complex *a, Complex *b);
	Complex complexSubstraction(Complex *a, Complex *b);
	Complex complexMultiply(Complex *a, Complex *b);
	Complex complexDivision(Complex *a, Complex *b);
	double complexModulo(Complex *a);
	
	

	double getreal()
	{

	}
	void setReal(double real)
	{
		this->real = real;
	}

	double getImag()
	{

	}
	void getImag(double imag)
	{
		this->imag = imag;
	}

	Complex(double real, double imag) : real(real), imag(imag) {}

	Complex operator + (Complex *c1)
	{
		return Complex(this->real + c1->real, this->imag + c1->imag);
	}

	~Complex();
};

void print_error();
void print_menu(char select);
