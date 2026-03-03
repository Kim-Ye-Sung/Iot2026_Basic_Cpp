// C++ 구조체 기본

#include <iostream>

struct Human
{
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
	Human a = { "김예성", 30, "무직백수개백수" };

	a.show_data();

	return 0;
}