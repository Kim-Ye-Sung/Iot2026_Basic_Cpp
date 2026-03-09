#include <iostream>
using namespace std;


extern int value;   // 접근 시도 error
int main() {
	//static → internal linkage → 다른 번역단위(.cpp)에서 보이지 않음
	cout << value << endl;
}