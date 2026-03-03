// 입력값을 3개 받는 생성자가 있는 클래스를 만들어보자

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

class MyClass
{
private:
	char name[20];
	int age;
	int ID;

public:
	MyClass(const char* aname, int aage, int aID);

	void GetData();

};

MyClass::MyClass(const char* aname, int aage, int aID)
{
	strcpy(name, aname);
	age = aage;
	aID = ID;
}

void MyClass::GetData()
{
	std::cout << "당신의 이름은 " << name << " 이며, 나이는 " << age << "살이고, 학번은 " << ID << "입니다." << std::endl;
}


int main()
{
	MyClass obj("김예성", 30, 20162944);

	obj.GetData();

	return 0;
}