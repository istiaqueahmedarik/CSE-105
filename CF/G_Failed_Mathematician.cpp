#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int countTrailingZeroes(int n)
{
    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;
    return count;
}
int32_t main()
{
    IOS;
    int t;
    cin >> t;
    int cs = 1;
    while (t--)
    {
        int x;
        cin >> x;
        int l = 1, r = 1e9, ans = 0, flag = 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (countTrailingZeroes(mid) == x)
            {
                ans = mid;
                flag = 0;
                r = mid - 1;
            }
            else if (countTrailingZeroes(mid) > x)
            {
                r = mid - 1;
            }
            else if (countTrailingZeroes(mid) < x)
                l = mid + 1;
        }
        if (flag)
            cout << "Case " << cs++ << ": "
                 << "impossible" << endl;
        else
            cout << "Case " << cs++ << ": " << ans << endl;
    }
    return 0;
}