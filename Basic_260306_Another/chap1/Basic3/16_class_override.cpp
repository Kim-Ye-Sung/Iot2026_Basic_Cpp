#include <iostream>

using namespace std;

class A
{
	public:
	virtual void fun()	// virtual로 설정
	{
		cout << "A::fun()" << endl;
	}
};

class B: public A
{
	public:
	void fun() override		// override는 필수는 아님. 그저 안정성 체크를 위한 용도
	{
		cout << "먼저 호출 " << endl;
		A::fun();
		cout << "B::fun()" << endl;
	}
};


class P
{
public:
	void f()	// virtual 설정 안함.
	{
		cout << "P::f" << endl;
	}
};

class C : public P	
{
public :
	void f()	// 이러면 C클래스의 개인적인 함수임.
	{
		cout << "C::f" << endl;
	}
};

int main()
{
	A* a = new B;
	a->fun(); // B::fun()이 호출됨
	delete a;


	
	P* p = new P;
	p->f();		// 자기 자신의 함수 호출

	P* c = new C;
	c->f();		// virtual로 설정 한것이 아니기 때문에 P클래스의 f() 함수를 그대로 호출

	C* d = new C;
	d->f();		// 마찬가지로 P클래스와는 전혀 다른 함수로써 C클래스의 f()함수를 호출

	d->P::f();	// 이렇게 하면 C클래스의 부모클래스인 P클래스의 f()함수 호출 가능

	delete p;
	delete c;
	delete d;
	return 0;
}