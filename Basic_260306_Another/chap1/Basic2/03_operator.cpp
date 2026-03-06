#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	// 연산자
	int n1 = 1;
	int n2 = 2;
	n1++;
	n1 = n1 + 1;
	n1 += 1;
	int sum = n1 + n2;

	cout << "sum : " << sum << endl;
	cout << ((n1 > n2) ? "big" : "small") << endl;

	sum += n1 * n2;

	cout << "sum : " << sum << endl;


	n1 = 1; n2 = 2;
	cout << (n1 & n2) << endl;	// 두 비트가 모두 1이라면 그 비트를 1로 해라
	cout << (n1 | n2) << endl;	// 두 비트중 하나라도 1이라면 그 비트를 1로 해라
	cout << (n1 ^ n2) << endl;	// 두 비트가 서로 다르면 그 비트를 1로 해라
	cout << (~n1) << endl;		// 현재 비트들의 0과 1을 서로 반전시켜라
	cout << (n1 << 4) << endl;	// 지금 비트들을 4칸씩 왼쪽으로 옮겨라


	int n3 = 10;
	int n4 = 20;
	n4 += n3 *= 40;	// n4 = n4 +(n3 = n3*40)
	cout << n4 << endl;


	// 출력 조정자
	cout << hex << 255 << endl;	  // 255를 16진수로 표시
	cout << dec << 255 << endl;	  // 255를 10진수로 표시
	cout << oct << 255 << endl;	  // 255를 8진수로 표시
	//cout << bin << 10 << endl;
	cout << bitset<8>(10) << endl;

	cout << showbase << hex << 255 << endl;	  // 255를 16진수로 표시
	cout << showbase << dec << 255 << endl;	  // 255를 10진수로 표시
	cout << showbase << oct << 255 << endl;	  // 255를 8진수로 표시
	cout << showbase << bitset<8>(10) << endl;

	bool b1 = false;

	cout << b1 << endl;					// 0으로 출력
	cout << boolalpha << b1 << endl;	// false로 출력
	
	double z = 123456.5623;
	cout << showpoint << z << endl;

	cout << uppercase << hex << 255 << endl;

	return 0;
}