#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i = 0, j = s.size() - 1;
    int flag = 0;

    char f = s[0];
    while (i <= j)
    {
        if (s[i] != s[0])
        {
            flag = 1;
        }
        if (s[i] != s[j])
        {
            cout << s.size() << "\n";
            return 0;
        }
        i++;
        j--;
    }
    if (!flag)
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << s.size() - 1 << "\n";
    }
}