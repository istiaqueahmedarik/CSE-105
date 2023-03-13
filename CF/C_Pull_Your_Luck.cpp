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
        int n, x, p;
        cin >> n >> x >> p;
        int l = 0, r = 0;
        for (int i = 0; i < n; i++)
        {
            if (i >= x)
            {
                r = max(r, i - x);
            }
            if (i >= n - x - 1)
            {
                l = max(l, i - (n - x - 1));
            }
        }
        if (l + r >= p)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}