#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));

	int answer = rand() % 100 + 1;
	
	int input;

	int num = 0;

	while (true)
	{
		cout << "숫자를 입력해주세요 : ";

		cin >> input;

		num++;

		if (input == answer)
		{
			cout << "정답 입니다!" << endl;
			cout << num << "번만에 정답을 맞추셨습니다." << endl;
			break;
		}
		else if(input > answer)
		{
			cout << "정답은 입력한 숫자보다 작습니다." << endl;
		}
		else
		{
			cout << "정답은 입력한 숫자보다 큽니다." << endl;
		}

		cout << endl;
	}


	return 0;
}