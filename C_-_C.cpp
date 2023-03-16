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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        int u = 0, d = 0, l = 0, r = 0;
        for (int j = i; j < n; j++)
        {
            if (s[j] == 'U')
            {
                u++;
            }
            else if (s[j] == 'D')
            {
                d++;
            }
            else if (s[j] == 'L')
            {
                l++;
            }
            else
            {
                r++;
            }
            if (u == d && l == r)
            {
                x++;
            }
        }
    }
    cout << x << endl;
    return 0;
}