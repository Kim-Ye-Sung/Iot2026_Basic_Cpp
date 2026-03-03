// 함수의 매개변수 참조자

#include <iostream>

using namespace std;

void change_val(int &n)  // 참조 매개변수
{
	n = 20;	
}

int main()
{
	int num = 10;
	cout << num << endl;

	change_val(num);
	cout << num << endl;

	return 0;
}