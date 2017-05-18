#include"testclass.hpp"
int main()
{
	Complex_t<double> a{ 5.0, 7.0 };
	
	Complex_t<double> b{ 5.0,7.0 };
	
	a == b; 
	
	a += a;
	cout << "a+=a" << a << endl;
	b -= {2, 3};
	cout << "b-={2,3} " << b << endl;
	a *= b;
	a+b;
	a*b;
	a-b;
	a/b;
	cout << "a+b=" << a + b << endl;
	cout << "a*b=" << a*b << endl;
	cout << "a-b=" << a - b << endl;
	cout << "a/b=" << a / b << endl;

	system("pause");
	return 0;
}
