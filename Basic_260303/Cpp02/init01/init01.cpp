// 여러가지 생성자 호출

#include <iostream>

int main()
{
	int num = 10;	// 복사생성자 호출	// 대입연산자가 나오면 무조건 복사생성자를 호출해서 초기화를 해준다고 생각하면 된다.
	int num1(100);	// 직접 초기화	// 인자 하나를 갖고있는 생성자를 통해서 초기화를 시켜준다.
	
	int num2{ 200 }; // 중괄호 직접 초기화
	int num3 = { 300 };	// 중괄호 복사 초기화

	int x = 3.14;	// 3으로 변환하여 저장
	//int x1{ 3.14 };	// 컴파일 오류 발생. 이로인해 중괄호를 사용한 초기화는 임의적인 값 변환을 확실하게 막는다고 생각하면 된다.

	std::cout << num << std::endl;
	std::cout << num1 << std::endl;
	std::cout << num2 << std::endl;
	std::cout << num3 << std::endl;

	return 0;
}