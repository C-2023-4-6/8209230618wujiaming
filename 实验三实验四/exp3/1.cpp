#include <iostream>
using namespace std;
int gcd(int m, int n)
{
	int k = 1;
	int i = 1;
	while (i <= m && i <= n)
	{
		if (m % i == 0 && n % i == 0)
			k = i;
		i++;
	}
	return k;
}
int lcm(int m, int n)
{
	int k = 1;
	for (int i = 2; i <= m && i <= n; i++)
	{
		if (m % i == 0 && n % i == 0)
			k = i;
	}
	int h;
	h = m * n / k;
	return h;
}
int main()
{
	cout << "������������" << endl;
	int m, n;
	cout << "m = ";
	cin >> m;
	cout << "n = ";
	cin >> n;
	cout << m << " and " << n << " ��󹫱�����" << gcd(m, n) << endl;
	cout << m << " and " << n << " ��С��Լ����" << lcm(m, n) << endl;

	return 0;
}