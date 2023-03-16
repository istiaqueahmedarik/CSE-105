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
    int prev[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i)
        {
            prev[i] = prev[i - 1] + x;
        }
        else
        {
            prev[i] = x;
        }
    }
    if (prev[n - 1] % 3 != 0)
    {
        cout << 0 << endl;
        return 0;
    }
    int cnt = 0, cnt1 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (prev[i] == (2 * prev[n - 1]) / 3)
        {
            cnt += cnt1;
        }
        if (prev[i] == prev[n - 1] / 3)
        {
            cnt1++;
        }
    }
    cout << cnt << endl;
    return 0;
}