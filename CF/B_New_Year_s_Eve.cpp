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
    int n, k;
    cin >> n >> k;
    if (k == 1)
    {
        cout << n << endl;
        return 0;
    }
    int ans = 1;
    while (n)
    {
        ans <<= 1;
        n /= 2;
    }
    cout << ans - 1 << endl;
    return 0;
}