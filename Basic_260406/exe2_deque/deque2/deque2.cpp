#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<string> dq;

	dq.push_front("tiger");
	dq.push_front("lion");
	dq.push_back("cats");

	deque<string>::iterator it;

	for (it = dq.begin(); it != dq.end(); it++)
	{
		cout << *it << " ";
	}

	cout << endl << endl;

	deque<string>::const_iterator constit = dq.begin();

	constit += 2;

	dq.insert(constit,2, "INSERT");   // constit가 가리키는 위치에 "INSERT"를 두개 넣어라.
	
	constit = dq.begin() + 1;

	dq.insert(constit, "IS");		// constit가 가리키는 위치에  "IS"를 넣어라
	dq.insert(dq.begin(), "IS");   // dq의 시작 위치에 "IS"를 넣어라
	dq.push_back("INSERT");

	for (constit = dq.begin(); constit != dq.end(); constit++)
	{
		cout << *constit << " ";
	}

	constit = dq.end();
	constit--;		// 마지막 원소
	constit--;		// 마지막 앞에 

	dq.erase(constit);

	cout << endl << endl;
	
	for (constit = dq.begin(); constit != dq.end(); constit++)
	{
		cout << *constit << " ";
	}

	cout << endl << endl;

	for (auto element : dq)			// 복사 사용
	{
		cout << element << " ";
	}

	cout << endl << endl;

	for (auto& element : dq)		// 참조 사용
	{
		cout << element << " ";
	}

	//int a = 10;
	//int b = 20;

	//const int* pa = &a;	// 데이터를 상수 - 포인터 간접참조로 데이터를 변경하지마라
	//int* const pb = &b;	// 포인터 변수 상수-포인터에 다른 변수 주소로 변경하지마라

	//*pa = 100;
	//pa = &b;

	//const int c = 10;

	return 0;
}