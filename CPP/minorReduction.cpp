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
        for (int i = s.size() - 2; i >= 0; i--)
        {
            int first = s[i] - '0';
            int sec = s[i + 1] - '0';

            if (first + sec >= 10)
            {
                flag = 1;
                string sub1 = s.substr(0, i);
                string sub2 = s.substr(i + 2, s.size() - i + 3);
                cout << sub1 << first + sec << sub2 << "\n";
                break;
            }
        }
        if (flag)
        {
        }
        else
        {
            string sub = s.substr(2, s.size() - 2);
            cout << (s[0] - '0' + s[1] - '0') << sub << "\n";
        }
    }
}