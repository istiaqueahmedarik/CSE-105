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
    char c;
    cin >> n >> m >> c;
    vector<vector<char>> arr(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int ans = 0;
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == c)
            {
                if (i - 1 >= 0 && arr[i - 1][j] != c && arr[i - 1][j] != '.' && mp[arr[i - 1][j]] == 0)
                {
                    ans++;
                    mp[arr[i - 1][j]] = 1;
                }
                if (i + 1 < n && arr[i + 1][j] != c && arr[i + 1][j] != '.' && mp[arr[i + 1][j]] == 0)
                {
                    ans++;
                    mp[arr[i + 1][j]] = 1;
                }

                if (j - 1 >= 0 && arr[i][j - 1] != c && arr[i][j - 1] != '.' && mp[arr[i][j - 1]] == 0)
                {
                    ans++;
                    mp[arr[i][j - 1]] = 1;
                }

                if (j + 1 < m && arr[i][j + 1] != c && arr[i][j + 1] != '.' && mp[arr[i][j + 1]] == 0)
                {
                    ans++;
                    mp[arr[i][j + 1]] = 1;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}