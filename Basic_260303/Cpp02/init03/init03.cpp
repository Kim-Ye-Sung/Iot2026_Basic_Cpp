// 콜론초기화로 상수 초기화하기

#include <iostream>

class constSome
{
public:
	const int value;	// 보통은 변수에 const(상수)를 선언하면 바로 초기화를 한다. 왜냐하면 변하지 않는 값이어야 하기때문에
						// 그러나 아직 객체가 생성도 되지 않았기때문에 각 객체마다 원하는 값으로 초기화를 하는건 불가능하다.
	constSome(int i) :value(i)	// 따라서 생성자에서 const 변수를 콜론초기화로 문제점을 해결한다.	
	{

	}

	void show()
	{
		printf("value : %d\n", value);
	}
};

class refSome
{
public :
	int& ri;	// 원래는 래퍼런스도 선언과 동시에 초기화를 해야한다.
	
	refSome(int& i) :ri(i)	// 래퍼런스도 생성자에서 콜론 초기화로 초기화 가능하다.
	{

	}

	void show()
	{
		printf("ri : %d\n", ri);
	}
};

int main()
{
	constSome cs(10);
	cs.show();

	int i = 5;
	refSome rs(i);
	rs.show();

	return 0;
}