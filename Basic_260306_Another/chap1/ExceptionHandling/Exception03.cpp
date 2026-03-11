#include <iostream>

using namespace std;

int main()
{
	try
	{
		cout << "1" << endl;
		cout << "2" << endl;
		cout << "3" << endl;
		cout << "4" << endl;
		//throw exception("강제예외 발생");	 // 6 출력
		//throw 1;							 // 7 출력
		//throw "a";						 // 8 출력
		throw runtime_error("강제예외발생"); // "그 외 에러" 출력
		cout << "5" << endl;
	}
	catch (const std::exception&)
	{
		cout << "6" << endl;
	}
	catch (int)
	{
		cout << "7" << endl;
	}
	catch (const char* e)
	{
		cout << "8" << endl;
	}
	catch (...)
	{
		cout << "그 외 에러" << endl;
	}
	cout << "9" << endl;

	return 0;
}