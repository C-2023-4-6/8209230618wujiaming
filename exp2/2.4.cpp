#include<iostream>
using namespace std;
int main()
{
	double a,b;
	char ch;
	cout << "请输入运算:";
	cin >> a >> ch >> b;
	switch (ch)
	{
	case 43 :
		cout << "答案为：" << a + b << endl;
		break;
	case 45:
		cout<< "答案为：" << a - b << endl;
		break;
	case 42:
		cout<<"答案为：" << a * b << endl;
		break;
	case 47:
		if (b == 0)                  //除数不能为0
		{
			cout << "错误" << endl; break;
		}
		else
		{
			cout << "答案为：" << a / b << endl;
			break;
		}
	case 37:
		if (a != int(a) || b != int(b))//取余运算中数据必须为整型
		{
			cout << "错误" << endl;
			break;
		}
		else
		{
			cout << "答案为：" << int(a) % int(b) << endl;
			break;
		}
	default:
		cout << "运算符非法" << endl;
	}
	return 0;

}