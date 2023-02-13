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
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int n, m;
        cin >> n >> m;
        int x = n / (m + 1);
        int ans;
        int z = n % (m + 1);
        if (z == 0)
        {
            ans = x * a * m;
        }
        else
        {
            ans = x * a * m;
            ans += min(z * a, z * b);
        }
        int p = min(n * a, n * b);
        cout << min(ans, p) << endl;
    }
    return 0;
}