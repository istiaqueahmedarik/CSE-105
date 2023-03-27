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
    map<string, int> mp;
    while (t--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            string s;
            int p;
            cin >> s >> p;
            mp[s] = p;
        }
        else if (x == 1)
        {
            string s;
            cin >> s;
            cout << mp[s] << endl;
        }
    }
    return 0;
}