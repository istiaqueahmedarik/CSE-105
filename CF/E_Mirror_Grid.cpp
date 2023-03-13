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
        vector<vector<int>> v(n, vector<int>(n));
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < n; j++)
            {
                v[i][j] = s[j] - '0';
            }
        }
        int ans = 0;
        vector<vector<int>> v1(n, vector<int>(n)), v2(n, vector<int>(n)), v3(n, vector<int>(n));
        // rotate 90
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                v1[i][j] = v[n - j - 1][i];
            }
        }
        // rotate 180
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                v2[i][j] = v[n - i - 1][n - j - 1];
            }
        }
        // rotate 270
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                v3[i][j] = v[j][n - i - 1];
            }
        }
        int x = (n + 1) / 2;
        int y = n / 2;
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                int temp = 0, temp1 = 0;
                if (v[i][j] == 1)
                {
                    temp++;
                }
                else if (v[i][j] == 0)
                {
                    temp1++;
                }
                if (v1[i][j] == 1)
                {
                    temp++;
                }
                else if (v1[i][j] == 0)
                {
                    temp1++;
                }
                if (v2[i][j] == 1)
                {
                    temp++;
                }
                else if (v2[i][j] == 0)
                {
                    temp1++;
                }
                if (v3[i][j] == 1)
                {
                    temp++;
                }
                else if (v3[i][j] == 0)
                {
                    temp1++;
                }
                ans += min(temp, temp1);
            }
        }
        cout << ans << endl;
    }
    return 0;
}