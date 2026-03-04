// 복사생성자 및 소멸자

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Person
{
	char name[20];
	int age;

public:
	Person(const char* name, int age)	// 생성자
	{
		printf("constructor!!\n");
		strcpy(this->name, name);
		this->age = age;
	}

	Person(const Person& other)				// 복사생성자. 입력이나 출력이 객체일때는 복사생성자가 호출된다.
	{										// 복사생성자 인수는 상수 래퍼런스를 사용한다.
		printf("copy constructor!!\n");
		strcpy(name, other.name);
		age = other.age;
	}

	~Person()			// 소멸자
	{
		printf("나는 소멸자 입니다.\n");
	}


	void showPerson()
	{
		printf("이름 : %s,  나이 : %d\n", name, age);
	}
};

int main()
{
	Person man("홍길동", 100);	// constructor
	man.showPerson();


	Person p(man);				// copy constructor - 객체를 복사하여 초기화하므로 복사생성자 호출.
	p.showPerson();				

	Person copym1 = man;
	copym1.showPerson();

	return 0;
}

/* 
	기본 생성자. 기본복사생성자. 소멸자는 디폴트로 제공된다.
*/