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
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (mp[s])
        {
            cout << s << mp[s] << endl;
        }
        else
        {
            cout << "OK" << endl;
        }
        mp[s]++;
    }
    return 0;
}