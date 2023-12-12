#include <iostream>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0; i < 26; i++)
		counts[i] = 0;
	for (int j = 0; j < 100; j++)
	{
		counts[s[j] - 'a']++;
		counts[s[j] - 'A']++;
	}
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
			cout << static_cast<char>(i + 'a') << " : " << counts[i] << "  times " << endl;
	}

}

int main()
{
	char list[100];
	int counts[26];
	cout << "Enter a string : ";
	cin.getline(list, 100);
	count(list, counts);


	return 0;
}