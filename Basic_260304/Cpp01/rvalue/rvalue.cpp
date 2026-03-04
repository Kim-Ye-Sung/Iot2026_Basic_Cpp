// 우측값 레퍼런스

#include <iostream>

int main()
{
	int a = 10;
	int& ra = a;

	int&& rra = 10;

	std::cout << a << ", " << ra << ", " << rra << std::endl;
	std::cout << &a << ", " << &ra << ", " << &rra << std::endl;

	return 0;
}