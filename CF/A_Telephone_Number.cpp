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
        string s;
        cin >> s;
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '8')
            {
                if (n - i >= 11)
                {
                    cout << "YES" << endl;
                    flag = 0;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}