// 클래스에 다른 클래스의 객체를 멤버 변수로 가질때 초기화 하는 방법

#include <iostream>

class Position
{
public:
	int m_x, m_y;

	Position(int x, int y) : m_x(x), m_y(y){}
};

class objSome
{
public:
	Position p;	// Position 클래스의 객체를 멤버변수로 가짐.
	
	objSome(int x, int y) : p(x, y) { }	// 생성자에서 Position객체의 멤버변수를 초기화

	void show()
	{
		printf("%d %d\n", p.m_x, p.m_y);
	}
};

int main()
{
	objSome os(10, 50);

	os.show();

	return 0;
}