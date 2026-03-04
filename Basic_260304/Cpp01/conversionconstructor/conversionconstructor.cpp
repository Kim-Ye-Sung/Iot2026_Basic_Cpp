// 변환생성자 : 인자를 단 하나가지는 생성자

#include <iostream>

class Time
{
	int hour = 1;
	int min = 0;
	int sec = 0;

public :
	Time(){}

	Time(int abssec)
	{
		hour = abssec / 3600;
		min = (abssec/60) % 60;
		sec = abssec % 60;
	}
	
	void outTime()
	{ 
		printf("입력한 시간은 %d시 %d분 %d초 입니다.\n", hour, min, sec);
	}
};

int main()
{
	Time now(4372);
	now.outTime();

	Time t;
	t.outTime();

	return 0;
}