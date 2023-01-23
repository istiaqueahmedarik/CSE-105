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
        vector<int> v;
        int c = 0;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == '1')
            {
                if (s[i + 1] == '0')
                {
                    c++;
                    if (c)
                        v.push_back(c);
                    c = 0;
                }
                else
                {
                    c++;
                }
            }
        }
        if (s[s.size() - 1] == '1')
            c++;
        if (c)
            v.push_back(c);
        sort(v.begin(), v.end(), greater<int>());
        if (v.size() == 0)
            cout << 0 << "\n";
        else
        {
            int ans = 0;
            for (int i = 0; i < v.size(); i += 2)
                ans += v[i];
            cout << ans << "\n";
        }
    }
}