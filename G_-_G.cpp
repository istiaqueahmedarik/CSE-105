#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int longest_cmn_subsec(vector<int> x, vector<int> y, vector<int> z, int m, int n)
{

    int lcm[m + 1][n + 1];

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                lcm[i][j] = 0;

            else if (x[i - 1] == y[j - 1])
                lcm[i][j] = lcm[i - 1][j - 1] + 1;

            else
                lcm[i][j] = max(lcm[i - 1][j], lcm[i][j - 1]);
        }
    }

    return lcm[m][n];
}
int32_t main()
{
    IOS;
    int n, k;
    cin >> n >> k;
    vector<int> a[k];
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            a[i].push_back(x);
        }
    }
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}