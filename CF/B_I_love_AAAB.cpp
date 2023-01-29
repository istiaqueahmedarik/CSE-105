#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int flag = 0;
        if (s[0] == 'B' || s.back() == 'A')
        {
            flag = 1;
        }
        else
        {
            int temp = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == 'A')
                    temp++;
                else
                    temp--;
                if (temp < 0)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}