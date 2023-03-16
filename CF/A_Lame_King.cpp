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
        int x, y;
        cin >> x >> y;
        int ans = 0;
        x = abs(x);
        y = abs(y);
        if (x == y)
        {
            ans = 2 * x;
        }
        else if (x > y)
        {
            ans = 2 * x - 1;
        }
        else
        {
            ans = 2 * y - 1;
        }
        cout << ans << endl;
    }
    return 0;
}