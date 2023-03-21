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
    int a[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        ans += a[s[i] - '0' - 1];
    }
    cout << ans << endl;
    return 0;
}