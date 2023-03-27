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
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    int c = 0;
    for (auto i : mp)
    {
        if (i.second)
        {
            if (mp[i.first + k])
            {
                c++;
            }
            if (mp[i.first - k])
            {
                c++;
            }
        }
    }
    cout << c / 2 << endl;
    return 0;
}