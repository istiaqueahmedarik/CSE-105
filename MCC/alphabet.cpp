#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int left;
    int right;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            left = i;
            break;
        }
    }
    for (int i = s.length() - 1; i >= 0; i--)
    {

        if (s[i] == 'Z')
        {
            right = i;
            break;
        }
    }
    cout << right - left + 1 << "\n";
}