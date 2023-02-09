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
        if (n % 2 == 0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            double x = ceil((double)n / 2) + 1;
            for (int i = 1; i < x; i++)
            {
                cout << 2 * i - 1 << " " << 2 * n - i + 1 << "\n";
            }
            for (int i = 1; i < x - 1; i++)
            {
                cout << 2 * i << " " << 2 * n - ceil((double)n / 2) + 1 - i << "\n";
            }
        }
    }
    return 0;
}