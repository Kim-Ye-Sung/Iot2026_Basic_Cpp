// C++의 동적할당

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

	// ---------  C언어의 동적할당 ------------------
	//int size = 0;


	//printf("배열의 크기를 입력해주세요 : ");
	//scanf("%d", &size);

	//int* numbers = (int*)malloc(size * sizeof(int));

	//for (int i = 0; i < size; i++)
	//{
	//	printf("numbers[%d] 에 들어갈 값 입력 : ", i);
	//	scanf("%d", &numbers[i]);
	//}

	//for (int i = 0; i < size; i++)
	//{
	//	printf("numbers[%d] = %d\n", i, numbers[i]);
	//}
	//------------------------------------------------

	//--------------- C++의 동적할당------------------
	int size;
	int* arr;

	cout << "배열 크기 : ";
	cin >> size;

	arr = new int[size];

	cout << "만든 배열 크기 : " << sizeof(int) * size << endl;

	delete[] arr;

	return 0;
}
