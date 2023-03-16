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
        for (int i = 0; i < n; i++)
            s[i] |= 32;
        int flag = 1;
        if (s[0] != 'm' || s[n - 1] != 'w')
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] != s[i + 1])
                {
                    if (s[i] == 'm' && s[i + 1] == 'e')
                        continue;
                    else if (s[i] == 'e' && s[i + 1] == 'o')
                        continue;
                    else if (s[i] == 'o' && s[i + 1] == 'w')
                        continue;
                    else
                    {
                        flag = 0;
                        break;
                    }
                }
            }
            if (flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}