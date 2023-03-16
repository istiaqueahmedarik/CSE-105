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
        int ans = 0, temp = 0, temp1 = 0;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            if (x == 1)
                temp++;
            else
            {
                temp1 += temp;
                temp = 0;
            }
            if (temp1)
            {
                ans = max(ans, temp + (temp1 / 2) + 1);
            }
            else
                ans = max(ans, temp);
        }
        cout << ans << endl;
    }
    return 0;
}