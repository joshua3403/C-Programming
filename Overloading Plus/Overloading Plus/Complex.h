#pragma once

#include <iostream>

using namespace std;

namespace joshofprogramming
{

	class Complex
	{
	private:
		double real;
		double imaginary;

	public:
		Complex();
		Complex(double real, double imaginary);
		Complex(const Complex &other);
		const Complex& operator=(const Complex &other);

		double GetReal() const { return real; }
		double GetImaginary() const { return imaginary; }


		~Complex();

	};
	
	ostream & operator<<(ostream &out, const Complex &c);
	Complex operator+(const Complex &c1, const Complex &c2);
	Complex operator+(const Complex &c1, double d);
	Complex operator+(double d, const Complex &c1);


}
