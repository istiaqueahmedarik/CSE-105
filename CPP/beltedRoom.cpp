#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int i = 1;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c = count(s.begin(), s.end(), '>');
        int c1 = count(s.begin(), s.end(), '<');
        int c2 = count(s.begin(), s.end(), '-');
        // cout << i << " ";
        // i++;
        if (c + c2 == s.size() || c1 + c2 == s.size())
        {
            cout << s.size() << "\n";
        }
        else
        {
            int c = 0;
            int ans = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '-')
                    c++;
                else
                {
                    if (c)
                    {
                        ans += c + 1;
                        c = 0;
                    }
                }
            }
            if (c)
            {
                ans += c + 1;
                c = 0;
            }
            if (s[n - 1] == '-' && s[0] == '-')
                ans--;
            cout << ans << "\n";
        }
    }
}