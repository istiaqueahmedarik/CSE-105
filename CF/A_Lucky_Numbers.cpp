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
        int l, r;
        cin >> l >> r;
        int mx = LLONG_MIN;
        int ans = 0;
        for (int i = l; i <= r; i++)
        {
            string s = to_string(i);
            sort(s.begin(), s.end());
            int mNum = s[0];
            int maxNum = s[s.size() - 1];
            mx = max(mx, maxNum - mNum);
            if (mx == maxNum - mNum)
                ans = i;
            if (mx == 9)
                break;
        }
        cout << ans << endl;
    }
    return 0;
}