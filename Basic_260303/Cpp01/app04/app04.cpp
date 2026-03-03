#include <iostream>

using namespace std;

int funt(int n)
{
	n++;
	return n;
}

int& funt1(int n)	// 리턴 타입이 래퍼런스이다.
{
	n++;
	return n;
}

int main()
{
	int num = 10;

	int ret = funt(num);
	cout << ret << endl;

	int res = funt1(num);	// 복사해서 사용
	cout << res << endl;
	
	int& ref = funt1(num);	// 참조해서 사용
	cout << ref << endl;
	// 사실 ref는 함수 안의 지역변수를 참조한 것이기 때문에
	// 함수의 실행이 종료된 변수가 사라져서 ref가 참조하는것이 사라지기 때문에 엄격히 따지면 이 코드는 문제가 있다.
	// 따라서 반환형이 참조인 경우는 매개변수도 래퍼런스로 해야하는것이 맞다.


	return 0;
}