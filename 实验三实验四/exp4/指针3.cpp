#include <iostream>
using namespace std;
void xlq(int arr[], int len)
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
	int size;
	cout << "Enter size:";
	cin >> size;
	cout << "Enter arr:";
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
		cin >> arr[i];
	cout << "数组首地址为：" << arr << endl;
	cout << "数组第一个元素的地址为：" << &arr[0] << endl;
	cout << "数组第二个元素的地址为：" << &arr[1] << endl;
	xlq(arr, size);
	for (int i = 0; i < size; i++)
		cout << *(arr + i) << "  ";
	delete[] arr;
	return 0;
}