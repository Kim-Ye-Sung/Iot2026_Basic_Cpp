#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

class Human
{
private :
	char* name;
	int age;

public:
	Human(const char* name, const int age): age(age)
	{
		cout << "일반생성자" << endl;

		int length = strlen(name);
		this->name = new char[length];
		strcpy(this->name, name);
		this->age = age;
	}

	Human(const Human& other)
	{
		cout << "복사생성자" << endl;
		int length = strlen(other.name);
		this->name = new char[length];
		strcpy(this->name, other.name);
		this->age = other.age;
	}

	Human(Human&& other) noexcept
	{
		cout << "이동생성자" << endl;
		name = other.name;
		age = other.age;

		other.name = nullptr;
		other.age = 0;
	}

	void viewHuman()
	{
		cout << "이름 : ";
		if (name)
		{
			cout << name;
		}
		else
		{
			cout << "nullptr";
		}
		cout << "  나이 : " << age << endl;
	}
};

int main()
{
	Human h("홍길동", 100);
	h.viewHuman();

	Human h2(h);
	h2.viewHuman();

	Human h3(move(h));
	h3.viewHuman();

	h.viewHuman();

	return 0;
}