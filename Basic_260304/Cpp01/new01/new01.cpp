
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int size = 0;

	printf("배열의 크기를 입력해주세요 : ");
	scanf("%d", size);

	int* numbers = (int*)malloc(size * sizeof(int));

	for (int i = 0; i < size; i++)
	{
		printf("numbers[%d] 에 들어갈 값 입력 : ", i);
		scanf("%d", &numbers[i]);
	}

	for (int i = 0; i < size; i++)
	{
		printf("numbers[%d] = %d\n", i, numbers[i]);
	}

	return 0;
}