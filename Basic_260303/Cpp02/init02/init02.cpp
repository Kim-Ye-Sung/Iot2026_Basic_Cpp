// initialize 초기화(콜론 초기화)

#include <iostream>

using namespace std;

class Time
{
private:
	int m_hour;
	int m_min;
	int m_sec;

public:
	Time()
	{
		cout << "기본 생성자 호출!!" << endl;
	}

	Time(int h, int m, int s) : m_hour(h), m_min(m), m_sec(s) // initialize 초기화 혹은 콜론초기화. 
															  // 생성자의 몸체(구현부)에 들어오기도 전에 초기화를 함으로서 생성자가 실행되기 이전에 초기화를 실행한다.
	{
		cout << "매개변수 생성자 호출!!" << endl;
	}

	void setTime(int h, int m, int s)
	{
		m_hour = h;
		m_min = m;
		m_sec = s;
	}

	void showTime()
	{
		printf("현재 시간은 %d:%d:%d 입니다.\n", m_hour, m_min, m_sec);
	}

};

int main()
{
	Time now;
	now.setTime(16,52,37);
	now.showTime();

	Time t1(16, 57, 33);
	t1.showTime();

	return 0;
}