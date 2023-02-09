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
        int n, m, k;
        cin >> n >> m >> k;
        int sit = k / n;
        if (sit % 2)
        {
            cout << sit + n - k % n - 1 << endl;
        }
        else
        {
            cout << sit + k % n << endl;
        }
    }
    return 0;
}