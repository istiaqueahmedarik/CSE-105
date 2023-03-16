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
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int dp[n + 1][n + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i - 1] % j == 0)
            {
                dp[i][j] += dp[i - 1][j] + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += dp[n][i];
    }
    cout << ans << endl;

    return 0;
}