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
        for (int i = n - 2; i >= 0; i--)
        {
            a[i] = max(a[i], a[i + 1] - 1);
        }
        for (int i = 0; i < n; i++)
        {
            a[i] ? cout << "1 " : cout << "0 ";
        }
        cout << endl;
    }
    return 0;
}