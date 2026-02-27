// C++의 입력

#include <iostream>

int main()
{
	int val1;
	std::cout << "첫번째 숫자 입력 : ";
	std::cin >> val1;

	int val2;
	std::cout << "두번째 숫자 입력 : ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "덧셈 결과 : " << result << std::endl;

	std::string name;
	int age; 

	std::cout << "이름을 입력해주세요 : "; 
	std::cin >> name;

	std::cout << "나이를 입력해주세요 : ";
	std::cin >> age;

	std::cout << "당신의 이름은 " << name << "이고, 나이는 " << age << "살 입니다." << std::endl;

	std::cin >> name >> age;
	std::cout << "당신의 이름은 " << name << "이고, 나이는 " << age << "살 입니다." << std::endl;

	// cout이라는 객체에 << 연산자를 사용해 출력한다.
	// cin도 객체이고, << 는 출력(삽입) 연산자, >> 는 입력(추출) 연산자이다.
	// cout은 인스턴스인데, ostream의 클래스로부터 만들어진 객체다.
	
	/*--- 배열 기반의 문자열 입출력 ---*/
	// 문자열의 입력방식도 다른 데이터의 입력방식과 큰 차이가 나지 않는다.
	char name1[100];
	char lang[200];

	std::cout << "이름은 무엇입니까? ";
	std::cin >> name1;

	std::cout<< "좋아하는 프로그래밍 언어는 무엇인가요? ";
	std::cin >> lang;

	std::cout << "내 이름은 " << name1 << "입니다.\n";
	std::cout << "제일 좋아하는 언어는 " << lang << "입니다." << std::endl;

	return 0;
}