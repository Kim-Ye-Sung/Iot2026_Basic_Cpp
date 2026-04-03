#include <iostream>

using namespace std;

class Myclass
{
private:
	int a;
public:
	Myclass(int aa) : a(aa)
	{
		cout << a << "constructor" << endl;
	}

	Myclass(const Myclass& other) : a(other.a)
	{
		cout << a << "copy constructor" << endl;
	}

	~Myclass()
	{
		cout << a << "destructor" << endl;
	}

	Myclass()
	{
		cout << "asdadsad" << endl;
	}
};


int main()
{
	// Myclass obj(10);

	Myclass obj1 = Myclass(20);  // Myclass obj1(20)이랑 똑같은 것이다. 이건 복사생성자가 아니다. 주의해야한다.
								 // 우측값은 임시객체가 아니다.

	Myclass(30);			// 이름없는 임시객체

	cout << "Bye!" << endl;

	return 0;
}
