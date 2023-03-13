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
        int n, m;
        cin >> n >> m;
        if (m == 1 && n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << max(n, m) - 2 + 2 * min(m, n) << endl;
        }
    }
    return 0;
}