#include<iostream>
using namespace std;
int f(int a, int i)
{
	if (i == 10) return a;
	else
	{
		a = (a + 1) * 2;
		i++;
		return f(a, i);
	}

}
int main()
{
	cout << "����������";
	cout << f(1, 1) << "��";
}