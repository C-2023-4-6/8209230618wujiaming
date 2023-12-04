#include<iostream>
using namespace std;
int main()
{
	const int maxn = 10;//定义能输入字符的最大数
	char ch[maxn];
	int a=0, b=0, c=0, d=0,i;
	cout << "请输入一串字符:";
	for (i = 0; i < maxn; ++i)
	{
		cin.get(ch[i]);
		cin.get();       //解决不能输入空格和换行的问题
		if ((ch[i] >= 65 && ch[i] <= 90) || (ch[i] >= 97 && ch[i] <= 122))
		{
			++a;
		}
		else
		{
			if ((ch[i] >= 48 && ch[i] <= 57) || (ch[i] >= 171 && ch[i] <= 172))
			{
				++b;
			}
			else
			{
				if (ch[i] ==32)
				{
					++c;
				}
				else
				{
					++d;
				}
			}
		}

	}
	cout << "中英文字母个数为：" << a << endl;
	cout << "数字字符个数为：" <<b << endl;
	cout << "空格个数为：" << c << endl;
	cout << "其他字符个数为：" << d << endl;
	return 0;

}