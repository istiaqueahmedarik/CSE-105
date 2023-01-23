#include <bits\stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int flag = 0;
    if (s.length() == 1)
    {
        if (s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u' || s[0] == 'n')
            cout << "YES\n";

        else
            cout << "NO"
                 << "\n";
    }
    else
    {
        int i;
        for (i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == 'n')
            {
            }
            else if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
            {
                if (s[i + 1] == 'a' || s[i + 1] == 'e' || s[i + 1] == 'i' || s[i + 1] == 'o' || s[i + 1] == 'u')
                {
                }
                else
                {
                    flag = 1;
                }
            }
        }
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'n')
        {

            flag = 1;
        }
        if (flag)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}