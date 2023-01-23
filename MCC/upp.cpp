#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int upp = 0, low = 0;
    for (int i = 0; i < s.size(); i++)
        if (s[i] >= 97)
            low++;
        else
            upp++;
    if (upp > low)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 97)
                s[i] -= 32;
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] < 97)
                s[i] += 32;
        }
    }
    cout << s;
}