#include<iostream>
using namespace std;
int main()
{ 
	char ch;
	cout << "请输入一个字母：";
	cin >> ch;
	if (ch >= 97 && ch <= 122)
	{
		cout << "转换为大写为：" << char(ch - 32) << endl;
	}
	else
	{
		if (ch >= 41 && ch <= 90)
		{
			cout << "对应ASCLL码为：" << int(ch) << endl;
		}
	}
	return 0;
}