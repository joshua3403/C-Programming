#include "stdafx.h"
#include "Complex.h"

namespace joshofprogramming
{
	ostream & operator<<(ostream &out, const Complex &c)
	{
		out << "(" << c.GetReal() << "," << c.GetImaginary() << ")";
		return out;
	}

	Complex operator+(const Complex & c1, const Complex & c2)
	{

		return Complex(c1.GetReal() + c2.GetReal(), c1.GetImaginary() + c2.GetImaginary());
	}

	Complex operator+(const Complex & c1, double d)
	{
		return Complex(c1.GetReal() + d, c1.GetImaginary());
	}

	Complex operator+(double d, const Complex & c1)
	{
		return Complex(c1.GetReal()+ d, c1.GetImaginary());
	}

	Complex::Complex() : real(0), imaginary(0)
	{
	}

	Complex::Complex(double real, double imaginary) : real(real), imaginary(imaginary)
	{
	}

	Complex::Complex(const Complex & other)
	{
		cout << "Copy" << endl;
		real = other.real;
		imaginary = other.imaginary;
	}

	const Complex & Complex::operator=(const Complex & other)
	{
		cout << "Assignment operator" << endl;
		real = other.real;
		imaginary = other.imaginary;

		return *this;
	}

	Complex::~Complex()
	{
	}
}