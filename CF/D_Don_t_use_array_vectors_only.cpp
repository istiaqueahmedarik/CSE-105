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
        vector<int> p(2 * n);
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> p[i];
        }
        vector<int> ans;
        map<int, int> mp;
        for (int i = 0; i < 2 * n; i++)
        {
            if (mp[p[i]] == 0)
            {
                ans.push_back(p[i]);
                mp[p[i]]++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}