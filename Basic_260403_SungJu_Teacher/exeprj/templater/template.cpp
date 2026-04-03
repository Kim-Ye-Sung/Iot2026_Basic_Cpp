#include <iostream>

using namespace std;

template<typename T>	// 클래스 템플릿
class A			
{
	T num;

public:
	A(T num) : num(num){}

	T GetNum()
	{
		return num;
	}
};


template<typename T>     // 함수 템플릿
T add(T a, T b)
{
	return a + b;
}

template<typename T, typename T1>     // 둘 이상의 자료형 함수 템플릿
T add(T a, T1 b)
{
	return a + b;
}


int main()
{
	int res = add<int>(10, 20);

	cout << res << endl;

	double res1 = add<double>(10.1, 20.1);
	
	cout << res1 << endl;

	A<int> a(10);

	A<int> c(30);

	A<double> d(10.1);

	cout << add(a.GetNum(), c.GetNum()) << endl;
	return 0;
}	