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
    int n, q;
    cin >> n >> q;
    vector<vector<bool>> v(3, vector<bool>(n + 1, false));
    int bad = 0;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        bool past = v[x][y];
        for (int i = x - 1; i <= x + 1; i++)
        {
            for (int j = y - 1; j <= y + 1; j++)
            {
                if (i == x)
                    continue;
                if (i >= 1 && i < 3 && j >= 1 && j < n + 1)
                {
                    if (v[i][j])
                        bad += (past ? -1 : 1);
                }
            }
        }
        v[x][y] = !v[x][y];

        if (bad < 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}