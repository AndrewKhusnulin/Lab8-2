#include"test.hpp"
int main()
{
	Complex_t<double> a{ 7.0, 9.0 };
	
	Complex_t<double> b{ 7.0,9.0 };
	
	a == b; 
	
	a += a;
	cout << "a+=a" << a << endl;
	b -= {3, 5};
	cout << "b-={3,5} " << b << endl;
	a *= b;
	a+b;
	a*b;
	a-b;
	a/b;
	/*cout << "a+b=" << a + b << endl;
	cout << "a*b=" << a*b << endl;
	cout << "a-b=" << a - b << endl;
	cout << "a/b=" << a / b << endl;*/

	system("pause");
	return 0;
}
