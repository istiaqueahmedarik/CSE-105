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
        int n, k, d, w;
        cin >> n >> k >> d >> w;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cnt = 0, vacc = 1, lst = 0;
        for (int i = 1; i < n; i++)
        {
            if (vacc < k && a[i] - (a[lst] + w) <= d)
            {
                vacc++;
            }
            else
            {
                lst = i;
                vacc = 1;
                cnt++;
            }
        }
        if (vacc)
        {
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}