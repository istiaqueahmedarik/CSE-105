#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int dp[1000000];
int f(int n, int a, int b, int c)
{
    dp[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        int left = INT_MIN;
        int right = INT_MIN;
        int mid = INT_MIN;
        if (i - a >= 0)
            left = dp[i - a];
        if (i - b >= 0)
            right = dp[i - b];
        if (i - c >= 0)
            mid = dp[i - c];

        dp[i] = 1 + max(left, max(right, mid));
    }

    return dp[n];
}
int32_t main()
{
    IOS;
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << f(n, a, b, c) << endl;
    return 0;
}