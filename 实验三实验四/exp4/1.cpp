#include <iostream>
using namespace std;
int main()
{
	int arr[10];
	cout << "Enter ten numbers: " << endl;
	for (int i = 0; i < 10; i++)
		cin >> arr[i];
	cout << arr[0] << "  ";
	for (int i = 1; i < 10; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i] != arr[j])
			{
				if (i == j + 1)
					cout << arr[i] << "  ";
				else
					continue;
			}
			else
				break;
		}
	}
	return 0;
}