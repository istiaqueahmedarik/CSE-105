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
    int n, k;
    cin >> n >> k;
    int dp[n];
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        dp[i] = dp[i - 1] + x;
    }
    int i = 1, j = k;
    int ans = 0;
    int sm = INT_MAX;
    while (j <= n)
    {
        if (sm > dp[j] - dp[i - 1])
        {
            sm = dp[j] - dp[i - 1];
            ans = i;
        }
        i++;
        j++;
    }
    cout << ans << endl;
    return 0;
}