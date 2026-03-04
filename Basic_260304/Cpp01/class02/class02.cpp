// this란 무엇인가
// 복사해서 생성하는법

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Person
{
private:
	char name[20];
	int age;
public:
	Person(const char* name, int age)
	{
		printf("생성자 호출!\n");
		strcpy(this->name, name);	// 클래스 내에서 사용할 변수가 이처럼 같을 경우 구분짓기 어렵다. 
									// 이때 사용하는것이 this이다. this->변수 로 사용하면 이 클래스의 멤버변수라는 뜻이다.
		this->age = age;
	}

	Person(Person& other)		// 복사 생성자 정의	
	{
		printf("복사 생성자 호출!\n");
		strcpy(this->name, other.name);
		this->age = other.age;
	}


	void viewPerson()
	{
		printf("이름 : %s,  나이 : %d\n", name, age);
	}

};

int main()
{
	Person a("김예성", 30);	// 일반적인 객체 생성. 이때는 생성자 실행
	a.viewPerson();


	Person p = a;	// 객체를 복사해서 생성하는것(복사생성자). 이때는 복사생성자가 실행된다.
	p.viewPerson();

	Person p1(p);	// 복사생성자 호출
	p1.viewPerson();

	return 0;
}