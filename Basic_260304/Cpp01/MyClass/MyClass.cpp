// 이동 생성자를 활용하여 보자.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class MyClass
{
	char* name;
	int age;

public:
	MyClass(const char* name, int age)
	{
		cout << "일반 생성자 호출!" << endl;
		
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->age = age;
	}

	MyClass(const MyClass& obj)
	{
		cout << "복사 생성자 호출!" << endl;
		this->name = new char[strlen(obj.name) + 1];
		strcpy(this->name, obj.name);
		this->age = obj.age;
	}

	MyClass(MyClass&& obj) noexcept
	{
		cout << "이동 생성자 호출!" << endl;
		this->name = obj.name;
		this->age = obj.age;

		obj.name = nullptr;
	}

	~MyClass()
	{
		cout << "소멸자 호출!" << endl;
		delete[] name;
	}

	void showMyClass()
	{
		if (name != nullptr)
		{
			cout << "이름 : " << name << ",  나이 : " << age << endl << endl;
		}
		else
		{
			cout << "이름은 없고, 나이는 " << age << "입니다. " << endl << endl;
		}
	}


	void showAddress()
	{
		cout << (int)name << endl;
	}
};

int main()
{
	MyClass a("김예성", 30);
	a.showAddress();
	a.showMyClass();

	MyClass b(a);
	b.showAddress();
	b.showMyClass();

	MyClass c(move(a));
	c.showAddress();
	c.showMyClass();

	a.showAddress();
	a.showMyClass();



	return 0;
}