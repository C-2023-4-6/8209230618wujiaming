#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double a;
	int i;
	cout << "请任意输入一个数：";
	cin >> a;
	double x1 = a,x2;//注意此处将a赋值给x1必须确保a有值，故不可置于cin之上
	if (a < 0)
	{
		cout << "无平方根" << endl; 
	}
	else                                   //原函数输入负数和0时程序会运行很久没有答案
	{
		if (a == 0)
		{
			cout << "其平方根为：" << a << endl;
		}
		else
		{
			for (i = 1; ; ++i)
			{
				x2 = (x1 + a / x1) / 2;
				if (fabs(x2 - x1) < 1e-10)    //无论是1e-5还是1e-10还是更小都是保留6位有效数字
				{                             //查询后得知cout输出浮点数的默认精度为6位，而1e-5范围在6位精度下已经足够小，即它已经有至少6位是精确的了，所以在换成比它更小的范围时输出的答案一样
					break;
				}
				x1 = x2;
			}
			cout << "其平方根为：" << x2 << endl;
		}
	}
	return 0;
}