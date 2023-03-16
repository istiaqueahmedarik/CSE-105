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
        string s;
        cin >> s;
        int c = 0;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
                c++;
        }
        if (s[0] != ')' && s[n - 1] != '(' && c % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}