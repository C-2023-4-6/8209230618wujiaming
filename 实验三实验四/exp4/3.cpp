#include <iostream>
using namespace std;
int main()
{
	bool arr[100];
	for (int i = 0; i < 100; i++)
	{
		arr[i] = false;
	}
	for (int j = 0; j < 100; j++)
	{
		for (int m = j; m < 100; m += j + 1)
		{
			if (arr[m])
			{
				arr[m] = false;
			}
			else {
				arr[m] = true;
			}
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (arr[i])
			cout << i + 1 << "  ";
	}
	return 0;
}