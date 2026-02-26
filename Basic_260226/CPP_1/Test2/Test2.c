// 전역, 지역, 스태틱, 포인터 변수들은 메모리의 어느 지역에 저장될까?

#include <stdio.h>

int a;
int global_c = 100;

int func()
{
	return 1;
}

int main()
{
	int b;
	static int c;
	const int d;
	char arr[20] = "hi";
	char* parr = "hong";

	printf("func     : %p\n", func);	// 함수 이름도 주소
	printf("global a : %p\n", &a);
	printf("local b  : %p\n", &b);
	printf("global_C : %p\n", &global_c);
	printf("static c : %p\n", &c);
	printf("const d  : %p\n", &d);
	printf("array    : %p\n", arr);
	printf("parr     : %p\n", parr);

	return 0;
}

/*
	메모리 구조
	data segment : stack (함수가 실행될때마다 할당받는 영역, 지역변수등이 할당됨. 그래서 함수가 종료되면 할당된 변수들이 반환됨)
				   heap 
				   data
	code segment : 함수 하나당 여기에 할당
*/