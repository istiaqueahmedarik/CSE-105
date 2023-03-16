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
    int n, nm;
    cin >> n >> nm;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int b[n];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int l = 0, r = 1e13;
    int ans = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] * mid > b[i])
                temp += a[i] * mid - b[i];
        }
        if (temp <= nm)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << endl;
    return 0;
}