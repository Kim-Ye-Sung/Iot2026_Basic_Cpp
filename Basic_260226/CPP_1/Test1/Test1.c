#include <stdio.h>

int n;

int main()
{
	char arr[] = "hong";
	char *arr1 = "hong";
	
	//printf("arr : %c", arr);
	printf("arr[0] : %c\n", arr[0]);
	printf("arr[1] : %c\n", arr[1]);
	printf("arr[2] : %c\n", arr[2]);
	printf("arr[3] : %c\n", arr[3]);
	printf("arr[4] : %s\n", arr[4]);

	printf("arr : %d\n", arr);
	printf("arr1 : %d\n", &arr1);
	printf("hong : %d\n", *arr1);
	printf("n : %d\n", &n);

	return 0;
}