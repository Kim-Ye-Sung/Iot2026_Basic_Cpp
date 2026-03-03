// C 구조체 기본

#include <iostream>

typedef struct
{
	char name[30];
	int age;
	char job[30];
}Human;

void show_data(Human ah)
{
	printf("이름 : %s,	나이 : %d,	직업 : %s", ah.name, ah.age, ah.job);
}

int main()
{
	Human a = { "김예성", 30, "무직백수개백수" };

	show_data(a);

	return 0;
}