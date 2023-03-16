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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x = 0, y = 0;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                x--;
            else if (s[i] == 'R')
                x++;
            else if (s[i] == 'U')
                y++;
            else
                y--;
            if (x == 1 && y == 1)
            {
                cout << "YES\n";
                flag = 1;
                break;
            }
        }
        if (!flag)
            cout << "NO\n";
    }
    return 0;
}