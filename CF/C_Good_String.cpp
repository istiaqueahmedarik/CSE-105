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
    int n;
    cin >> n;
    string s;
    cin >> s;
    string new_string;
    char prev = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == prev)
        {
            ans++;
        }
        else
        {
            new_string.push_back(s[i]);
            prev = (prev == 0 ? s[i] : 0);
        }
    }
    if (prev)
    {
        new_string.pop_back();
        ans++;
    }
    cout << ans << endl;
    cout << new_string << endl;
    return 0;
}