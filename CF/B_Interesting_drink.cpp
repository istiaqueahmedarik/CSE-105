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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        int low = 0, high = n - 1, ans = -1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (a[mid] <= x)
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << ans + 1 << endl;
    }
    return 0;
}