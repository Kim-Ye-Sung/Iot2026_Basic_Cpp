#include <iostream>

using namespace std;

int main()
{
	int month;

	cout << "당신이 태어난 월을 입력해주세요 : ";
	cin >> month;

	if (month >= 3 && month <= 5)
	{
		cout << "봄에 태어나셨습니다." << endl;
	}
	else if (month >= 6 && month <= 8)
	{
		cout << "여름에 태어나셨습니다" << endl;
	}
	else if (month >= 9 && month <= 11)
	{
		cout << "가을에 태어나셨습니다." << endl;
	}
	else if ((month == 12 || month == 1) || month == 2)
	{
		cout << "겨울에 태어나셨습니다." << endl;
	}
	else
	{
		cout << "날짜를 잘못 입력하셨습니다." << endl;
	}

	switch (month)
	{
	case 3:
	case 4:
	case 5:
		cout << "봄에 태어나셨습니다." << endl;
		break;
	case 6:
	case 7:
	case 8:
		cout << "여름에 태어나셨습니다." << endl;
		break;
	case 9:
	case 10:
	case 11:
		cout << "가을에 태어나셨습니다." << endl;
		break;
	case 12:
	case 1:
	case 2:
		cout << "겨울에 태어나셨습니다." << endl;
		break;
	default:
		cout << "날짜를 잘못 입력하셨습니다." << endl;
		break;
	}

	return 0;
}