// 참조자(reference)

#include <iostream>

using namespace std;

int main()
{
	// 참조자 기본 사용법
	int num1 = 1020;
	int& num2 = num1;

	num2 = 3047;
	cout << "VAL : " << num1 << endl;
	cout << "REF : " << num2 << endl;
	
	cout << "VAL : " << &num1 << endl;
	cout << "REF : " << &num2 << endl;


	// 포인터에서의 참조자 기본 사용법
	int num = 12;
	int* ptr = &num;
	int** dptr = &ptr;

	int& ref = num;
	int* (&pref) = ptr;
	int** (&dpref) = dptr;

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;

	return 0;
}