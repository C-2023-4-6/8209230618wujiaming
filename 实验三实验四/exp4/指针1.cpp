#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	for (int i = 0; i <= len2 - len1; i++)
	{
		int a = 1;
		for (int j = 0; j < len1; j++)
		{
			if (s1[j] != s2[j + i])
			{
				a = 0;
				break;
			}

		}
		if (a == 1)
		{

			return i;
		}
	}
	return -1;
}
int main()
{
	int size = 99;
	char* s1 = new char[size];
	char* s2 = new char[size];
	cout << "第一个 : ";
	cin.getline(s1, size);
	cout << "第二个: ";
	cin.getline(s2, size);
	cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << indexof(s1, s2) << endl;

	return 0;
}