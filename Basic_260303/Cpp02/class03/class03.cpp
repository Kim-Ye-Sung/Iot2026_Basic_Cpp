// C++ 클래스 기본

#include <iostream>

class Human
{
public:
	char name[30];
	int age;
	char job[30];

	void show_data()
	{
		printf("이름 : %s,	나이 : %d,	직업 : %s", name, age, job);
	}

};

int main()
{
	Human h = { "Hong", 30, "Student" };	// 복사 생성자 호출
	Human a("김예성", 30, "학생");			// 객체 생성자 문법

	h.show_data();
	std::cout << std::endl;
	a.show_data();

	return 0;
}