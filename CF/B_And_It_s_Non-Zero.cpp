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
        int n, m;
        cin >> n >> m;
        map<int, int> mp;
        for (int i = n; i <= m; i++)
        {
            mp[i]++;
        }
        int c = 0;
        for (int i = n; i <= m; i++)
        {
            int x = ~i;
            if (mp[i] != 0 && mp[x] != 0)
            {
                mp[i] = 0;
                mp[~i] = 0;
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}