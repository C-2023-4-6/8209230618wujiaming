#include <iostream>
using namespace std;
void xlq(double* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				double temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{

	double arr[10] = { 4.6,6.5,3.3,9.9,8.1,7.7,2.12,1.25,5.05,10.6 };
	xlq(arr, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "  ";
	}

}