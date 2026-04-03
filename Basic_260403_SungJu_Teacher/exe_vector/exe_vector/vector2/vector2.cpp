#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;

	cout << "v[i], v.size(), v.capacity()" << endl;
	
	for (auto i = 0; i < 32; i++)
	{
		v.push_back(i +1);
		
		cout << "[ " << v[i] << ", " << v.size() << ", " << v.capacity() << " ] " << endl;
	}

	vector<int>v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	v1.insert(v1.begin()+1, 10);
	v1.insert(find(v1.begin(), v1.end(), 10), 20);	// 10이라는 원소를 찾고 그 앞에 20을 넣기. 만약 10이 없다면 마지막에 20일 넣는다.
	v1.pop_back();

	for (auto i : v1)
	{
		cout << "i : " << i << endl;
	}

	return 0;
}

/*
	v.push_back(7) : 마지막 원소 뒤에 원소 7을 추가한다.
	v.insert(i, val) : i번째 위치에 원소 val를 넣는다.
	v.pop_back() : 마지막 원소를 제거한다.
	v.size() : 벡터에 저장된 원소 갯수를 리턴한다.
	v.capacity() : 벡터에 저장 가능한 공간의 크기를 리턴한다.
	sizeof(v) : 벡터 자체 고정된 크기를 바이트 크기로 리턴한다.
	벡터에 원소를 추가할 때마다 size는 1씩 증가하지만, capacity는 1씩 증가하지 않고
	일정한 범위마다 일정 배율로 늘어난다.
*/