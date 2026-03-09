#include <iostream>

using namespace std;

class Circle {
private:
	int aaa;

public:
	Circle(int b) : aaa(b)
	{

	}

	Circle(const Circle& a)
	{
		aaa = a.aaa;
	}

	Circle& operator = (const Circle* a)
	{
		cout << "aaaaaaaa" << endl;

		this->aaa = a->aaa;

		a->aaa = 20;

		return *this;
	}

	int get()
	{
		return aaa;
	}
};

int main() {
	Circle c1(100);
	Circle c2(70);
	
	c2 = &c1;

	cout << c2.get() << endl;
	return 0;

}