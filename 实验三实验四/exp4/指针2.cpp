#include <iostream>
using namespace std;
int parseHex(const char* const hexString)
{
    int result = 0;
    int hexLength = strlen(hexString);

    for (int i = 0; i < hexLength; i++)
    {
        char c = hexString[i];
        int digit;

        if (c >= '0' && c <= '9')
        {
            digit = c - '0';
        }
        else if (c >= 'A' && c <= 'F')
        {
            digit = c - 'A' + 10;
        }
        else if (c >= 'a' && c <= 'f')
        {
            digit = c - 'a' + 10;
        }
        else
        {

            return 0;
        }

        result = result * 16 + digit;
    }

    return result;
}

int main()
{
    cout << parseHex("A5") << endl;
    return 0;
}