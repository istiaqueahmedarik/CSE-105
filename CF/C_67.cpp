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
            if (mp.find(s) != mp.end())
                cout << mp[s] << endl;
            else
                cout << 0 << endl;
        }
        else if (x == 2)
        {
            string s;
            cin >> s;
            mp.erase(s);
        }
        else
        {
            string l, r;
            cin >> l >> r;
            auto it = mp.lower_bound(l);
            auto it2 = mp.upper_bound(r);
            for (auto it3 = it; it3 != it2; it3++)
            {
                cout << it3->first << " " << it3->second << endl;
            }
        }
    }
    return 0;
}