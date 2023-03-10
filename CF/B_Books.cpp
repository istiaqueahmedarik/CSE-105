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
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int sum = 0;
    int i = 0, j = 0;
    int ans = 0;
    while (j < n)
    {
        sum += a[j];
        if (sum > k)
        {
            sum -= a[i];
            ans = max(ans, j - i);
            i++;
        }
        j++;
    }
    ans = max(ans, j - i);
    cout << ans << endl;
    return 0;
}