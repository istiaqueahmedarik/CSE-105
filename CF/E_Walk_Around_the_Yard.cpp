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
    int n, m;
    cin >> n >> m;
    int xc, yc;
    cin >> xc >> yc;
    int k;
    cin >> k;
    int ans = 0;
    while (k--)
    {
        int dx, dy;
        cin >> dx >> dy;
        int l = 0, r = 1e9;
        int stepTotal = 0;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (xc + dx * mid >= 1 && xc + dx * mid <= n && yc + dy * mid >= 1 && yc + dy * mid <= m)
            {
                l = mid + 1;
                stepTotal = mid;
            }
            else
                r = mid - 1;
        }
        ans += stepTotal;
        xc += dx * stepTotal;
        yc += dy * stepTotal;
    }
    cout << ans << endl;
    return 0;
}