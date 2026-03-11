#include <iostream>

using namespace std;

int main()
{
	// 배열의 선언
	int arr[5];

	// 배열의 초기화
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	int arr2[5] = { 1,2,3,4,5 };	// 배열을 선언과 동시에 초기화
	int arr3[] = { 6,7,8,9,10 };	// 배열 크기를 생략하고 초기화
	int arr4[5] = { 1 };				// 배열의 모든 요소를 1로 초기화

	cout << "arr의 길이 : " << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "arr2의 길이 : " << size(arr2) << endl;

	cout << endl;

	// 배열요소에 접근
	cout << "arr[0] : " << arr[0] << endl; // 10
	cout << "arr[1] : " << arr[1] << endl; // 20

	cout << endl;

	for (int i = 0; i < size(arr3); i++)
	{
		cout << "arr3[" << i << "] : " << arr3[i] << endl;
	}

	cout << endl;

	for (int i = size(arr2) - 1; i >= 0; i--)
	{
		cout << "arr2[" << i << "] : " << arr2[i] << endl;
	}


	return 0;
}