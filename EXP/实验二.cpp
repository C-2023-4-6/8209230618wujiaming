#include<iostream>
#define pi 3.14159
using namespace std;
int main() {
	double r, h;
	cout << "输入底的半径和高" << endl;
	cin >> r >> h;
	double v;
	v = (r * r * h * pi) / 3;
	cout << v << endl;
	return 0;
}