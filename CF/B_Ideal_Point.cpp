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
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[55] = {0};
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            if (x <= k && y >= k)
            {
                for (int p = x; p <= y; p++)
                {
                    a[p]++;
                }
            }
        }
        int mx = *max_element(a, a + 55);
        int c = 0;
        int c1 = 0;
        for (int i = 0; i < 55; i++)
        {
            if (a[i] == mx)
            {
                c++;
                c1 = i;
            }
        }

        if (c1 == k && c == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}