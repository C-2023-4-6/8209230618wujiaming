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
	cout << "输入两个数：" << endl;
	int m, n;
	cout << "m = ";
	cin >> m;
	cout << "n = ";
	cin >> n;
	cout << m << " and " << n << " 最大公倍数：" << gcd(m, n) << endl;
	cout << m << " and " << n << " 最小公约数：" << lcm(m, n) << endl;

	return 0;
}