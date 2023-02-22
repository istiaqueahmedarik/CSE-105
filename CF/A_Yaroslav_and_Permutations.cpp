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
    map<int, int> m;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
        c = max(c, m[a[i]]);
    }

    if (c <= (n + 1) / 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}