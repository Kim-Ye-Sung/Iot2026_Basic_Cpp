// iterator(반복자) : 컨테이너 내부의 데이터에 접근할 수 있는 포인터
// vector<int>::iterator it : 순방향 반복자 선언. 이 놈을 생략하고 auto로 선언해도 된다.
// vector<int>::reverse_iterator rit : 역방향 반복자 선언

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v = { 10,20,30,40,50 };

	vector<int>::iterator it;	// 반복자 선언

	for (it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}

	cout << endl << endl;

	for (auto iter = v.begin(); iter != v.end(); iter++)
	{
		cout << *iter << " ";
	}

	cout << endl << endl;

	vector<int>::reverse_iterator rit;	// 역방향 반복자 선언
	for (rit = v.rbegin(); rit != v.rend(); rit++)
	{
		cout << *rit << " ";
	}

	cout << endl << endl;

	for (auto riter = v.rbegin(); riter != v.rend(); riter++)
	{
		cout << *riter << " ";
	}

	return 0;
}