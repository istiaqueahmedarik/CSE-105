#include <bits/stdc++.h>
#define int long long
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
    int s = ((k - 1) * (k)) / 2;
    int ans = 0;
    if (s < n - 1)
    {
        cout << -1 << endl;
        return 0;
    }
    int i = 0, j = k - 1;
    while (i <= j)
    {
        int mid = (i + j) / 2;
        if ((s - ((mid * (mid + 1)) / 2)) >= n - 1)
        {
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }
    cout << k - 1 - j << endl;
    return 0;
}