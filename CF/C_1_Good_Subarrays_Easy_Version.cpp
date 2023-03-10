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
        int n;
        cin >> n;
        vector<int> dp(n + 1, 0);
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            int temp;
            cin >> temp;
            dp[i] = min(dp[i - 1] + 1, temp);
            ans += dp[i];
        }
        cout << ans << endl;
    }
    return 0;
}