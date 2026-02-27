// 함수 디폴트 매개변수

#include <iostream>

int Adder(int num1 = 1, int num2 = 2);

int main()
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;

	return 0;
}

int Adder(int num1, int num2)
{
	return num1 + num2;
}