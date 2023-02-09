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
        int n, m, d;
        cin >> n >> m >> d;
        int a[n];
        int b[m];
        int q[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            q[a[i]] = i;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        vector<int> ans;
        for (int i = 0; i < m - 1; i++)
        {
            if (q[b[i]] > q[b[i + 1]])
            {
                ans.push_back(0);
            }
            else
            {
                int x = q[b[i + 1]] - q[b[i]];
                int y = q[b[i]];
                int z = q[b[i]] + d - q[b[i + 1]];
                if (y != 0 && d != 0)
                {
                    ans.push_back(min({x, y, z}));
                }
                else if (y == 0 && d == 0)
                {
                    ans.push_back(x);
                }
                else if (y != 0 && d == 0)
                {
                    ans.push_back(min({x, y}));
                }
                else
                {
                    ans.push_back(min({x, y}));
                }
            }
        }
        int mn = *min_element(ans.begin(), ans.end());
        cout << mn << endl;
    }
    return 0;
}