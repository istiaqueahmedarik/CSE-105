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
        string s;
        cin >> s;
        int n = s.length();
        vector<int> v(3, -n);
        int ans = s.length();
        for (int i = 0; i < s.size(); i++)
        {
            v[(s[i] - '0') - 1] = i;
            int mx = *max_element(v.begin(), v.end());
            int mn = *min_element(v.begin(), v.end());
            ans = min(ans, mx - mn);
        }

        if (*min_element(v.begin(), v.end()) < 0)
            cout << 0 << endl;
        else
            cout << ans + 1 << endl;
    }
    return 0;
}