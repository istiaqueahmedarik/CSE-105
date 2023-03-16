#include <bits/stdc++.h>
#define int long long
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
    map<int, int> mp;
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
        mx = max(mx, x);
    }
    vector<int> dp(1000000, 0);
    dp[0] = 0;
    dp[1] = mp[1];
    for (int i = 2; i < 1000000; i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + i * mp[i]);
        if (i == mx)
            break;
    }
    cout << dp[mx] << endl;
    return 0;
}