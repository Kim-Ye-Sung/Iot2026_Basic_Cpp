
// shared_ptr : 소유권을 공유하는 스마트포인터(여러 포인터가 하나의 객체를 공유할 수 있다.)
// 객체의 참조 카운트를 관리하여 여러 포인터가 객체를 공유하게 한다. 즉, 소유권을 공유한다.
// 참조 카운트가 0이 되면 메모리가 해제된다.

#include <iostream>

using namespace std;

class MyClass
{
public:
	MyClass()
	{
		cout << "객체 생성" << endl;
	}

	~MyClass()
	{
		cout << "객체 소멸" << endl;
	}

	void func()
	{
		cout << "Hi Shared_ptr" << endl;
	}

};

int main()
{
	shared_ptr<MyClass> ptr = make_shared<MyClass>();
	shared_ptr<MyClass> ptr2 = ptr;		// unique_ptr과는 다르게 객체 공유가 가능하다. 
										// 이러면 참조 카운터가 증가한다.

	cout << endl;

	cout << "ptr과 ptr2는 객체를 공유중 " << endl;
	cout << "ptr count : " << ptr.use_count() << endl;
	cout << "ptr2 count : " << ptr2.use_count() << endl;

	ptr->func();
	ptr2->func();

	return 0;
}