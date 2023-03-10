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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        string t;
        cin >> t;
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[i])
            {
                if (i == n - 4)
                {
                    if (s[i] == t[i + 3])
                        swap(t[i], t[i + 3]);
                }
                else
                {
                    if (s[i] == t[i + 3])
                        swap(t[i], t[i + 3]);
                    else if (s[i] == t[i + 4])
                        swap(t[i], s[i + 4]);
                }
            }
        }
        if (s == t)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}