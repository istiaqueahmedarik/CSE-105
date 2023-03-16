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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int x = n / 2;
        int i = 1;
        while (x != 0)
        {
            if (a[i] % a[0] != a[0])
            {
                cout << a[i] << " " << a[0] << endl;
                i++;
                x--;
            }
        }
    }

    return 0;
}
