#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double f;
	double c;
	cout << "�����뻪�϶ȣ�" << endl;
	cin >> f;
	c = (f - 32) / 1.8;
	cout <<fixed << setprecision(2) << "��ǰ���϶�Ϊ��"<< c ;
	return 0;
}