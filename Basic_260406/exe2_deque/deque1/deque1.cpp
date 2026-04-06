#include <iostream>
#include <deque>

using namespace std;

void show(deque<int> a)
{
	deque<int>::iterator it;

	for (it = a.begin(); it != a.end(); it++)
	{
		cout << *it << " ";
	}

	cout << endl << endl;
}

void show_reverse(deque<int>a)
{
	deque<int>::reverse_iterator it;

	for (it = a.rbegin(); it != a.rend(); it++)
	{
		cout << *it << " ";
	}

	cout << endl << endl;
}

int main()
{
	deque<int> dq;		// 덱 객체 생성

	for (int i = 0; i < 5; i++)
	{
		dq.push_back((i+1) * 10);
	}
	
	show(dq);

	show_reverse(dq);

	dq.push_front(1);
	dq.push_front(2);
	dq.push_back(100);
	dq.push_back(200);

	show(dq);

	show_reverse(dq);

	return 0;
}