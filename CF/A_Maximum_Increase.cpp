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
    {
        cin >> a[i];
    }
    int dp[n + 1] = {0};
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            dp[i] = dp[i - 1] + 1;
        }
        else
        {
            dp[i] = 0;
        }
        ans = max(ans, dp[i]);
    }
    cout << ans + 1 << endl;

    return 0;
}
