#include <iostream>

using namespace std;

class Myclass
{
	int n;

public:
	Myclass(int n) : n(n) { cout << n << "constructor " << endl; }

	~Myclass()
	{
		cout << n << "destructor" << endl;
	}

	void set(int n)
	{
		this->n = n;

		cout << "set(" << n << ")" << endl;
	}
};

int main()
{
	//Myclass* obj1 = &Myclass(10);
	//Myclass& obj2 = Myclass(20);

	Myclass obj = Myclass(10);
	obj.set(22);

	const Myclass& obj1 = Myclass(30);		// 임시객체를 상수로 참조하면 가능하다.
	// obj1.set(30);

	cout << "Bye!" << endl;

	Myclass&& obj2 = Myclass(30);		// 정상적인 형태로 이름없는 객체를 rvalue 취급한다.
	obj2.set(44);

	cout << "Bye!" << endl;

	return 0;
}