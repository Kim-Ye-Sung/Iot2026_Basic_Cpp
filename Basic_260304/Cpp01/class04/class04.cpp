// 깊은 복사

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Person
{
private:
	char* m_name;
	int m_age;

public:
	Person(const char* name, int age)
	{
		
	}

	Person()
	{

	}

	void showPerson()
	{
		printf("이름 : %s,  나이 : %d\n", m_name, m_age);
	}

};

int main()
{

}