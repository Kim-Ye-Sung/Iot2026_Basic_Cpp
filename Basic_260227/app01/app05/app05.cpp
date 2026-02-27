// const 선언 차이

#include <iostream>

using namespace std;

int main()
{	
	// const가 아니므로 변수에 담는 값을 변경할수 있음
	//int num1 = 10;
	//num1 = 20;
	//cout << num1 << endl;
	
	// 변수가 const이므로 변수에 다른 값을 담을수 없음
	//const int num2 = 10;
	//cout << num2 << endl;
	//num2 = 20;

	int num2 = 20;
	const int* p1 = &num2;
	cout << num2 << endl;
	cout << *p1 << endl;

	// *p1 = 10;
	int n3 = 22;
	p1 = &n3;
	cout << *p1 << endl;

	int n2 = 40;
	int* const p2 = &n2;
	
	*p2 = 50;
	//p2 = &n3;
	cout << *p2 << endl;

	return 0;
}