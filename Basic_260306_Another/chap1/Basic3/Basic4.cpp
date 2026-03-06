#include <iostream>

using namespace std;

int main()
{
	//for (int i = 2; i <= 9; i++)
	//{
	//	cout << "--------------------" << i << "단 ------------------" << endl;

	//	for (int j = 1; j <= 9; j++)
	//	{
	//		cout << i << " * " << j << " = " << i * j << endl;
	//	}
	//}


	for (int i = 2; i <= 9; i += 3)
	{
		for (int j = 1; j <= 9; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				if (i + k == 10)
				{
					break;
				}

				cout << i + k << " * " << j << " = " << (i + k) * j << "\t";
			}

			cout << endl;
		}

		cout << "----------------------------------------------" << endl;
	}

	return 0;
}