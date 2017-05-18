#include <iostream>
#include <conio.h>
using namespace std;
template <typename T>
class Complex_t {
private:
	 T real, imaginary;
public:
	Complex_t() : real(0), imaginary(0) {};
	Complex_t(T real, T imaginary) : real(real), imaginary(imaginary) {};
	Complex_t operator + (const Complex_t &complex)
	{
		return Complex_t(real + complex.real, imaginary + complex.imaginary);
	}
	Complex_t operator - (const Complex_t &complex)
	{
		return Complex_t(real - complex.real, imaginary - complex.imaginary);
	}
	void operator * (int a)
	{
		cout << "(" << real*a << ";" << imaginary*a << ")" << endl;
	}
	void operator / (double a)
	{
		cout << "(" << real/a << ";" << imaginary/a << ")" << endl;
	}
	Complex_t(const Complex_t &complex)
	{
		real = complex.real;
		imaginary = complex.imaginary;
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
		return *this;
	}
	Complex_t operator *=(const Complex_t &complex)
	{
		real *= complex.real;
		imaginary *= complex.imaginary;
		return *this;
	}
	Complex_t operator /=(const Complex_t &complex)
	{
		real /= complex.real;
		imaginary /= complex.imaginary;
		return *this;
	}
	Complex_t& operator =(const Complex_t &complex)
	{
		real = complex.real;
		imaginary = complex.imaginary;
		return *this;
	}
	bool operator ==(Complex_t &complex)
	{
		((real != complex.real) || (imaginary != complex.imaginary)) ? cout << "Complex numbers aren`t equal!" << endl	
		 : cout << "Complex numbers are equal!" << endl;
		return 1;
	}

	friend ostream & operator << (ostream &out, const Complex_t<double> &complex);
	friend istream & operator >> (istream &input, Complex_t<double> &complex);
};


istream & operator >> (istream &input, Complex_t<double> &complex)
{
	input >> complex.real >> complex.imaginary;
	return input;
}
ostream & operator <<(ostream &out, const Complex_t<double> &complex)
{
	out << "(" << complex.real << "; " << complex.imaginary << ")";
	return out;
}
int main()
{
	double real = 0.0, imaginary = 0.0;
	int constant = 0;
	Complex_t<double> a{ 0.0, 0.0 };
	try
	{
		cout << "Complex number # 1 (real;imaginary) =";
		if (cin >> a)
			cout;
		else throw 1;
	}
	catch (int error)
	{
		error = 0;
		exit(1);
	}
	Complex_t<double> b{ 0.0,0.0 };
	try
	{
		cout << "Complex number # 2 (real;imaginary) =";
		if (cin >> b)
			cout;
		else throw 1;
	}
	catch (int error)
	{
		error = 0;
		exit(1);
	}
	cout << "Complex numbers: " << endl;
	cout << "a = " << a << "; b = " << b << endl;
	cout << "Compare: ";
	a == b;
	cout << "multiplication and division complex number # 1 on const" << endl;
	cout << "Const=";
	cin >> constant;
	cout << "multiplication on const: " << endl;
	a*constant;
	try
	{
		if (constant != 0)
			cout << endl;
		else throw 1;
	}
	catch (int error)
	{
		error = 0;
		_getch();
		exit(1);
	}
	cout << "Division on const: " << endl;
	a / constant;
	cout << "Continue?Press any button!" << endl;
	_getch();
	a += a;
	cout << "(a+=a):       " << a << endl;
	b -= {3, 5};
	cout << "(b-={3;5}):   " << b << endl;
	a *= b;
	cout << "(a*=b):       " << a << endl;
	a /= b;
	cout << "(a/=b):       " << a << endl;
	cout << "(a+b):        "  << a + b << endl;
	cout << "(a*b):        "  << a * b << endl;
	cout << "(a-b):        "  << a - b << endl;
	cout << "(a/b):        "  << a / b << endl;
	
	_getch();
	return 0;
}
