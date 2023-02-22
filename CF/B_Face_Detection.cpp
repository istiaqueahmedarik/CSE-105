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
    int n, m;
    cin >> n >> m;
    vector<vector<char>> a(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < s.length(); j++)
        {
            a[i][j] = s[j];
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            bool f = (a[i][j] == 'f');
            bool a = (a[i][j] == 'a') || (a[i][j + 1] == 'a') || (a[i + 1][j] == 'a') || (a[i + 1][j + 1] == 'a');
            bool c = (a[i][j] == 'c') || (a[i][j + 1] == 'c') || (a[i + 1][j] == 'c') || (a[i + 1][j + 1] == 'c');
            bool e = (a[i][j] == 'e') || (a[i][j + 1] == 'e') || (a[i + 1][j] == 'e') || (a[i + 1][j + 1] == 'e');

            // if (a[i][j] == 'f')
            //     f++;
            // if (a[i][j] == 'a')
            //     a++;
            // if (a[i][j] == 'c')
            //     c++;
            // if (a[i][j] == 'e')
            //     e++;
            // if (f == 1 && a == 1 && c == 1 && e == 1)
            //     ans++;
        }
    }
    cout << ans << endl;
    return 0;
}