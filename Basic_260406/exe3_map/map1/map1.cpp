#include <iostream>
#include <map>

#define PAIRS pair<int,string>

using namespace std;

int main()
{

	// pair 객체를 사용하여 저장하는 경우
	map<int, string>m;

	m.insert(pair<int,string>(40,"me"));

	m.insert(PAIRS(35,"show"));

	m.insert(make_pair(10, "doks"));	// pair의 자료형을 알아서 찾아주기때문에 지정하지 않아도 된다.

	map<int, string> ::iterator it;		// map의 반복자

	for (it = m.begin(); it!=m.end(); it++)
	{
		cout << "[" << it->first << "] : [" << it->second << "]" << endl;
		cout << "[" << (*it).first << "] : [" << (*it).second << "]" << endl;
	}

	// operator[]를 사용하여 저장하는 경우
	map<string, string> m2;
	m2["aaa"] = "one";
	m2["bbb"] = "two";

	for (auto& e : m2)
	{
		cout << "[" << e.first << "] : [" << e.second << "]" << endl;
	}

	// 이렇게도 저장가능
	map<string, string> m3;
	m3.insert({ "one", "two"});
	m3.insert({ "third","four" });

	for (auto& e : m3)
	{
		cout << "type : " << typeid(e).name() << endl;	// 키와 값의 자료형 확인
		cout << e.first << endl;
	}
	
	// 값 찾는 방법
	auto iter = m3.find("one");

	if (iter != m3.end())
	{
		cout << "찾음: " << iter->first << " " << iter->second << endl;
	}
	else
	{
		cout << "없음" << endl;
	}

	return 0;
}