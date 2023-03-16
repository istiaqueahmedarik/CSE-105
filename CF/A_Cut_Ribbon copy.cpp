#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
vector<int> dp(1000000, -1);
int f(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return INT_MIN;
    if (dp[n] != -1)
        return dp[n];
    int res = max(f(n - a, a, b, c), max(f(n - b, a, b, c), f(n - c, a, b, c)));
    return dp[n] = 1 + res;
}
int32_t main()
{
    IOS;
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << f(n, a, b, c) << endl;
    return 0;
}