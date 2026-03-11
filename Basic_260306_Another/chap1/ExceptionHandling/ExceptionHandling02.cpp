#include <iostream>
#include <ctime>

using namespace std;

// 함수 내부에서 throw하고 main함수에서 catch하는 구조가 많이 사용된다.
int divide(int a, int b)
{
	if (b == 0)
	{
		throw "Division by zero is not allowed"; // throw 자체가 함수 실행을 끝내고 호출한 곳으로 예외를 전달한다. 그래서 return을 해줄필요가 없다.
	}

	return a / b;
}

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	while (true)
	{
		int num1 = rand() % 10;
		int num2 = rand() % 10;

		try
		{
			cout << "Attempting to divide " << num1 << " by " << num2 << "..." << endl;
			int result = divide(num1, num2);
			cout << "Result : " << result << endl;
		}
		catch (const char* e)
		{
			cout << "Error : " << e << endl;
			break;
		}
	}

	return 0;
}