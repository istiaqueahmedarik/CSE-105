#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int dp[1000000];
int frog(int arr[], int n)
{
    dp[0] = 0;
    for (int i = 1; i < n; i++)
    {
        int left = dp[i - 1] + abs(arr[i] - arr[i - 1]);
        int right = INT_MAX;
        if (i - 2 >= 0)
            right = dp[i - 2] + abs(arr[i] - arr[i - 2]);

        dp[i] = min(left, right);
    }
    return dp[n - 1];
}
int32_t main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << frog(arr, n) << endl;
    }
    return 0;
}