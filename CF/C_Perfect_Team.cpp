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
        int c, m, x;
        cin >> c >> m >> x;
        int low = 0, high = min(c, m);
        int ans = 0;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            int temp = c - mid + m - mid;
            if ((mid - temp) <= x)
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}