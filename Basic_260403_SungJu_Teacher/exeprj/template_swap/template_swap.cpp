#include <iostream>

using namespace std;

template<typename T>
void Swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}


int main()
{
	int a = 10;
	int b = 20;

	Swap<int>(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	char z = 'a';
	char x = 'b';

	Swap<char>(z, x);

	cout << "z = " << z << endl;
	cout << "x = " << x << endl;



	return 0;
}