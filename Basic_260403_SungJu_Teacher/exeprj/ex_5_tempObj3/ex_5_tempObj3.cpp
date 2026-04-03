#include <iostream>

using namespace std;

class Myclass
{
	int n;

public:
	Myclass(int n) : n(n) { cout << this << "constructor " << endl; }

	~Myclass()
	{
		cout << this << "destructor" << endl;
	}

	Myclass(const Myclass& other) : n(other.n)
	{
		cout << this << "copt_constructor" << endl;
	}

	void set(int n)
	{
		this->n = n;

		cout << "set(" << n << ")" << endl;
	}
};

Myclass func(const Myclass& obj)
{
	cout  <<"func()" << endl;
	return obj;
}

int main()
{
	Myclass obj(30);
	cout << endl;

	Myclass&& obj1(func(obj));

	cout << endl;

	cout << "bye!" << endl;

	return 0;
}