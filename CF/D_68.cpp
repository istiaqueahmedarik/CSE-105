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
    int n, m;
    cin >> n >> m;

    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
    }
    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
    }
    int same = 0;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second == 2)
        {
            same++;
        }
    }
    n -= same;
    m -= same;
    if (same % 2)
    {
        n++;
    }

    if (n > m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}