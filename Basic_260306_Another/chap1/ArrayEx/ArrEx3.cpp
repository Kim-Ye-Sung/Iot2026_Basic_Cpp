#include <iostream>
#include <iomanip>
#include "arrUtil.h"

using namespace std;

int main()
{
	int arr[] = { 1,2,3,4,5 };

	int sum = 0;

	for (int i = 0; i < size(arr); i++)
	{
		sum += arr[i];
	}

	cout << "배열 요소의 총 합 : " << sum << endl;
	cout << "배열 요소들의 평균 : " << (double)sum / size(arr) << endl;

	int arr2[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };

	printArr(arr2);

	for (int i = 0; i < size(arr2); i++)
	{
		for (int j = 0; j < size(arr2[i]); j++)
		{
			cout << setw(2) <<  arr2[i][j] << " ";
		}

		cout << endl;
	}
	
	int arr3[4][5] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };


	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			arr3[i][4] += arr3[i][j];   // 행 합
			arr3[3][j] += arr3[i][j];   // 열 합
			arr3[3][4] += arr3[i][j];   // 전체 합
		}
	}



	for (int i = 0; i < size(arr3); i++)
	{
		for (int j = 0; j < size(arr3[i]); j++)
		{
			cout << setw(2) << arr3[i][j] << " ";
		}

		cout << endl;
	}


	return 0;
}