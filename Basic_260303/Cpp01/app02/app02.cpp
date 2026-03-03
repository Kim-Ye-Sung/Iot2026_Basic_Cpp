// 참조자를 이용한 값 변경 및 주소 확인 

#include <iostream>

using namespace std;

int main()
{
	int num = 10;
	int& ref = num;
	int* pnum = &num;

	num++;		// 11
	ref++;		// 12
	(*pnum)++;	//13

	cout << "num : " << num << endl;
	cout << "ref : " << ref << endl;
	cout << "*pnum : " << *pnum << endl;

	cout << "&num : " << &num << endl;
	cout << "&ref : " << &ref << endl;

	return 0;
}