#include <iostream>

using namespace std;

struct B;
struct A
{
	shared_ptr<B> b_ptr;
};

struct B
{
	//shared_ptr<A> a_ptr;	// 강한 참조

	// 순환 참조 해결
	weak_ptr<A> a_ptr;		// 약한 참조
};

int main()
{
	shared_ptr<A>a(new A());
	shared_ptr<B>b(new B);

	a->b_ptr = b;
	b->a_ptr = a;

	cout << "count : " << a->b_ptr.use_count() << endl;
	cout << "count : " << b->a_ptr.use_count() << endl;
 
	return 0;
}