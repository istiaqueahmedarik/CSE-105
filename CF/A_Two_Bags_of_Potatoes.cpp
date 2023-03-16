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
    int y, k, n;
    cin >> y >> k >> n;
    int flag = 1;
    for (int i = 1; k * i <= n; i++)
    {
        if (k * i > y)
        {
            cout << k * i - y << " ";
            flag = 0;
        }
    }
    if (flag)
        cout << -1 << endl;
    return 0;
}