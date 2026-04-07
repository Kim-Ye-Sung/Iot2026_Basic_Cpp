
// 객체 포인터의 다형성으로 기초 클래스 타입의 포인터로 파생 클래스의 객체를 가리키면 기초 클래스의 멤버에만 접근된다.
// 이때 오버라이딩된 파생 클래스의 멤버 함수를 사용하기 위해서는 기초 클래스의 멤버 함수를 가상 함수로 만들면 된다.
// 순수 지정자를 가지는 순수 가상 함사루르 포함하는 클래스는 추상 클래스이다.
// 추상클래스는 객체를 생성할 수 없다.

#include <iostream>

using namespace std;

class Base
{
public :
	~Base(){}

	virtual void func1()
	{
		cout << "B::func1()" << endl;
	}

	virtual void func2()
	{
		cout << "B::func2()" << endl;
	}

	void func3()
	{
		cout << "B::func3()" << endl;
	}

	virtual void f() = 0;   // 순수 가상 함수
};

class Derived : public Base
{
public :
	void func1() override
	{
		cout << "D::func1()" << endl;
	}

	void func2() override
	{
		cout << "D::func2()" << endl;
	}

	void func3()
	{
		cout << "D::func3()" << endl;
	}
	
	void func4()
	{
		cout << "D::func4()" << endl;
	}

	void f() override
	{

	}
};

int main()
{
	Base b;

	Derived d;

	b.func1();
	d.func1();

	Base* pb = new Derived();	// 객체 포인터와 객체의 타입이 다르다. 상속으로 인해 가능한 것
	pb->func1();
	pb->func2();
	pb->func3();

	//pb->func4();	// 이건 자식객체의 함수라서 부모포인터로는 접근하여 사용하는것이 불가능하다.

	//Derived* pd = new Base();	

	delete pb;

	return 0;
}