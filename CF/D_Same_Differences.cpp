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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[a[i] - i]++;
        }
        int ans = 0;
        for (auto i : m)
        {
            ans += (i.second * (i.second - 1)) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}