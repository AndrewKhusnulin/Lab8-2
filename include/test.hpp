#include<iostream>
using namespace std;

template <typename T>
class Complex_t
{
private:
	T real, imaginary;

public:

	Complex_t() : real(0), imaginary(0) {};
	Complex_t(T real, T imaginary) :real(real), imaginary(imaginary) {};
  Complex_t operator + (const Complex_t &complex)
  {
	return Complex_t(real + complex.real, imaginary + complex.imaginary);
	}
	Complex_t operator - (const Complex_t &complex)
	{
		return Complex_t(real - complex.real, imaginary - complex.imaginary);
	}
	Complex_t operator += (const Complex_t &complex)
	{
		real += complex.real;
		imaginary += complex.imaginary;
		return *this;
	}
	Complex_t operator -=(const Complex_t &complex)
	{
		real -= complex.real;
		imaginary -= complex.imaginary;
		return (*this);
	}
	Complex_t operator *=(const Complex_t &complex)
	{
		real *= complex.real;
		imaginary *= complex.imaginary;
		return (*this);
	}
	Complex_t operator * (const Complex_t &complex)
	{
		return Complex_t(real * complex.real - imaginary * complex.imaginary, real * complex.imaginary + imaginary * complex.real);
	}
	Complex_t operator / (const Complex_t &complex)
	{
		Complex_t temp{ 0.0,0.0 };
		double k = complex.real * complex.real + complex.imaginary * complex.imaginary;
		if (k == 0)
			exit(1);
		temp.real = (real * complex.real + imaginary * complex.imaginary) / k;
		temp.imaginary = (imaginary * complex.real - real * complex.imaginary) / k;

		return temp;
	}
	bool operator ==(Complex_t &complex)
	{
		if ((real != complex.real) || (imaginary != complex.imaginary))
		{
			cout << "complex numbers are not equal" << endl;
			return 0;
		}
		else
		{
			cout << "numbers are equal" << endl;
			return 0;
		}
		return 1;
	}
};
