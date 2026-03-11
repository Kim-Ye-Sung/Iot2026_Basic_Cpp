#include "arrUtil.h"

int main()
{
	bool arrBool[] = { true, false, true, false };
	string arrStr[] = { "Hello", "World", "C++" };
	char arrChar[] = { 'A', 'B', 'C', 'D', 48 };

	printArr(arrBool);
	printArr(arrStr);
	printArr(arrChar);

	int arr4[10];
	initArr(arr4);
	printArr(arr4);
	shuffleArr(arr4);
	printArr(arr4);

	

	return 0;
}