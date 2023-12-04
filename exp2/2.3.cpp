#include<iostream>
using namespace std;
int main()
{
	double a,b, c, C;
	cout << "请输入三边长：";
	cin >> a>> b>> c;
	C = a + b + c;
	if (a + b <= c || a + c <= b || b + c <= a)
	{
		cout << "无法围成三角形" << endl;
	}
	else
	{
		cout << "该三角行的周长为：" << C << endl;
		if (a == b || b == c || a == c)
		{
			cout << "该三角形为等腰三角形" << endl;
		}
		else
		{
			cout << "该三角形不是等腰三角形" << endl;
		}
	}
	return 0;
}