#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

class MyClass
{
public:
	MyClass()
	{
		cout << "MyClass 객체 생성" << endl;
	}
	~MyClass()
	{
		cout << "소멸할게용 " << endl;
	}
};

int main()
{
	int* p = new int;

	*p = 10;

	cout << "*p : " << *p << endl;

	delete p;

	int* arr = new int[5];

	arr[0] = 10;
	cout << "arr[0] : " << arr[0] << endl;

	delete[] arr;

	MyClass* obj = new MyClass;

	delete obj;

	unique_ptr<char[]> name = make_unique<char[]>(10);	// 스마트 포인터 선언
	strcpy(name.get(), "홍길동");

	cout << name << endl;

	return 0;
}