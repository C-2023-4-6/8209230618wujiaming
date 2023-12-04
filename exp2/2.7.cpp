#include<iostream>
using namespace std;
int main()
{
	int i, j;
	for (i = 1; i < 6 ; ++i)
	{
		for (j = 1; j<i + 1; ++j)
		{
			cout << "*";
		}
		cout << endl;//在第i行输出结束后换行
	}
}