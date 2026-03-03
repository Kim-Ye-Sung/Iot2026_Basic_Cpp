// 상수 참조자 래퍼런스

#include <iostream>

using namespace std;

int main()
{
//	int& ref = 4;   
	const int& ref = 4;  // 상수 래퍼런스로 선언하면 리터럴도 참조할 수 있다.
	int&& ref = 4;  // 윗줄의 코드와 동일한 역할을 한다.

	cout << "ref : " << ref << endl;

	// 래퍼런스는 뭔가를 저장하는 공간이 새로 할당되는게 아니다.
	// 컴파일 당시에 래퍼런스 자체가 주소값으로 그대로 대체되는 것이다.

	return 0;
}