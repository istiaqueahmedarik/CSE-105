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
    int t, n, a, b, k;
    cin >> t >> n >> a >> b >> k;
    int i = 0, j = t;
    while (i < j)
    {

        int mid = (i + j + 1) / 2;
        int x = min(a, mid);
        int y = min(mid, b);
        int X, Y;
        if (n % 2 == 0)
        {
            X = n / 2;
            Y = n / 2;
        }
        else
        {
            X = n / 2 + 1;
            Y = n / 2;
        }
        if ((x * X) + (y * Y) >= k * mid)
        {
            i = mid;
        }
        else
        {
            j = mid - 1;
        }
    }
    cout << i << endl;
    return 0;
}