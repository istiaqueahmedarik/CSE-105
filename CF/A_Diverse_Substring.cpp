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
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            cout << "YES" << endl;
            cout << s[i] << s[i + 1] << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}