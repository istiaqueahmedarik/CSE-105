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
    int arr[n];
    int arr1[n];
    int sums[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 1; i <= n; i++)
    {
        sums[i] = (arr[i - 1] - arr1[i - 1]) * (arr[i - 1] - arr1[i - 1]) + sums[i - 1];
    }
    int m;
    cin >> m;
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        double ans = sqrt((double)sums[r] - (double)sums[l - 1]);
        cout << setprecision(6) << fixed << ans << endl;
    }
    return 0;
}
