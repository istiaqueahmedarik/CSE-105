#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int flag = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[i + 1])
            cout << s[i];
    }
}