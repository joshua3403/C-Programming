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

		friend ostream & operator<<(ostream &out, const Complex &c);

		~Complex();

	};
}
