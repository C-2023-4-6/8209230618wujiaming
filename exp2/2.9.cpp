#include<iostream>
using namespace std;
int main()
{
	const double apple = 0.8;
	int i,day=0, sum=0;
	for (i = 2;sum<=100; )
	{
		++day;
		sum = sum + i;
		i = i * 2;
	}
	cout<<apple*(sum - i / 2) / (day - 1);
		return 0;
}