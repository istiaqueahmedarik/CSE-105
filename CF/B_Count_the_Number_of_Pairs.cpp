#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int32_t main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<int, int> mp;
        map<int, int> mp1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'a')
                mp[s[i] - 'a']++;
            else
                mp1[s[i] - 'A']++;
        }
        int ans = 0;
        for (int i = 0; i < 26; i++)
        {
            int mn = min(mp[i], mp1[i]);
            ans += mn;
            int change = abs(mp[i] - mp1[i]);
            if (change >= 2)
            {
                ans += min(k, change / 2);
                k -= min(k, change / 2);
            }
        }
        cout << ans << endl;
    }
    return 0;
}