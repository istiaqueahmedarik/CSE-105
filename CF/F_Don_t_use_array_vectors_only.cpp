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
    vector<string> first(n);
    vector<string> second(m);

    for (int i = 0; i < n; i++)
    {
        cin >> first[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> second[i];
    }
    int same = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (first[i] == second[j])
            {
                same++;
            }
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