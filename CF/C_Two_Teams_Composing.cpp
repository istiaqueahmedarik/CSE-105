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
        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        int same = mp.size();
        int ans = -1;
        for (auto i : mp)
        {
            if (i.second == same)
                ans = max(ans, same - 1);
            else if (i.second < same)
                ans = max(ans, i.second);
            else
                ans = max(ans, same);
        }
        cout << ans << endl;
    }
    return 0;
}