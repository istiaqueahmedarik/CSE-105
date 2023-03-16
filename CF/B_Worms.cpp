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
    int n;
    cin >> n;
    int a[n];
    int pref[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
        {
            pref[i] = a[i];
        }
        else
        {
            pref[i] = pref[i - 1] + a[i];
        }
    }
    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < m; i++)
    {
        int l = 0, h = n - 1;
        while (l <= h)
        {
            int mid = (l + h) / 2;
            if (mid == 0)
            {
                if (b[i] <= pref[mid])
                {
                    cout << mid + 1 << endl;
                    break;
                }
                else
                {
                    l = mid + 1;
                }
            }
            else
            {
                if (b[i] <= pref[mid] && b[i] > pref[mid - 1])
                {
                    cout << mid + 1 << endl;
                    break;
                }
                else if (b[i] > pref[mid])
                {
                    l = mid + 1;
                }
                else
                {
                    h = mid - 1;
                }
            }
        }
    }

    return 0;
}