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
        int n, q;
        cin >> n >> q;
        vector<int> v(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<int>());
        vector<int> prev(n, 0);
        prev[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            prev[i] = prev[i - 1] + v[i];
        }

        while (q--)
        {
            int x;
            cin >> x;
            int l = 1, r = n, ans = -1;
            int ind = lower_bound(prev.begin(), prev.end(), x) - prev.begin();
            if (ind == n)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << ind + 1 << endl;
            }
        }
    }
    return 0;
}