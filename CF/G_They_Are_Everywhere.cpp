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
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mp;

    int ans = 0;
    int i = 0, j = 0;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
        int temp = mp[s[i]];
        for (; mp[s[j]] > 1; j++)
            mp[s[j]]--;
        if (temp == 1)
        {
            ans = i - j + 1;
        }
        else
        {
            ans = min(ans, i - j + 1);
        }
    }

    cout << ans << endl;
    return 0;
}