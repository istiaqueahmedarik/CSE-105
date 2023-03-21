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
        int n, c;
        cin >> n >> c;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int low = 1, high = 1e9;
        int ans = 0;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            int last = a[0];
            int count = 1;
            for (int i = 1; i < n; i++)
            {
                if (a[i] - last >= mid)
                {
                    count++;
                    last = a[i];
                }
            }
            if (count >= c)
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}