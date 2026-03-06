//

#include <iostream>

using namespace std;

bool sw;	// 전역 변수로 선언만하고 초기화하지 않음.
char c1;
long l1;
float f1;
double d1;

int main()
{
	// 지역변수는 반드시 할당이 되어야 한다.(초기화 되어야 한다.)
	bool b1 = -1;
	char first = 'A';
	char second = 48;	// 0 = 48, A = 65, a = 97

	cout << "b1 : " << boolalpha << b1 << endl;
	cout << "first : " << first << endl;
	cout << "second : " << second << endl;

	cout << sizeof(int) << endl;

	cout << "sw : " << sw << endl;	// 초기화하지 않은 bool 변수는 0으로 자동 초기화
	cout << "c1 : " << (int)c1 << endl;
	cout << "l1 : " << l1 << endl;
	cout << "f1 : " << showpoint << f1 << endl;	// showpoint를 사용하면 소수점으로 보이게 할수있다.
	cout << "d1 : " << showpoint << d1 << endl;


	return 0;
}