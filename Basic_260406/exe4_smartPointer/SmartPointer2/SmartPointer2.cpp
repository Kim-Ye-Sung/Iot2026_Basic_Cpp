
// 스마트 포인터: 특별한 클래스 타입으로, 포인터처럼 동작하지만 스스로 메모리를 관리한다. (RAII 디자인 패턴)
// 객체가 더 이상 필요하지 않을때(스코프를 벗어나면) 자동으로 삭제된다.
// unique_ptr : 소유권을 독점적으로 관리하는 스마트 포인터

#include <iostream>

using namespace std;

class MyClass
{
public:
	MyClass()
	{
		cout << "MyClass() 호출 : 객체 생성" << endl;
	}
	~MyClass()
	{
		cout << "~MyClass() 호출 : 객체 소멸 " << endl;
	}
};


int main()
{
	unique_ptr<MyClass> ptr(new MyClass());  // 동적으로 생성된 MyClass 객체를 unique_ptr 포인터가 가리킨다.

	unique_ptr<MyClass> ptr1 = make_unique<MyClass>();		// C++14 이후에 사용하는 방법 : new의 사용을 자제해라

	auto ptr2 = make_unique<MyClass>();		// auto로 지정하면 스마트포인터 쉽게 사용 가능

	// unique_ptr<MyClass> ptr3 = ptr2;    // 이런식으로 복사는 안된다. 소유권을 독점한다.
	unique_ptr<MyClass> ptr4 = move(ptr2);	// 복사는 허용하지 않으나, 소유권 이전은 가능하다.

	

	return 0;
}