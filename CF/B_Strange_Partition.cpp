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
        int n, x;
        cin >> n >> x;
        double mn = 0, mx = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mn += a;
            mx += ceil((double)a / x);
        }
        cout << fixed << setprecision(0) << ceil(mn / x) << " " << mx << endl;
    }
    return 0;
}