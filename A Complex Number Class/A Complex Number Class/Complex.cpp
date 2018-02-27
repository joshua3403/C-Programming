#include "stdafx.h"
#include "Complex.h"

namespace joshofprogramming
{
	ostream & operator<<(ostream &out, const Complex &c)
	{
		out << "(" << c.GetReal() << "," << c.GetImaginary() << ")";
		return out;
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