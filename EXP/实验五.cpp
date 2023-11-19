#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double f;
	double c;
	cout << "请输入华氏度：" << endl;
	cin >> f;
	c = (f - 32) / 1.8;
	cout <<fixed << setprecision(2) << "当前摄氏度为："<< c ;
	return 0;
}