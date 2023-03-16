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
    int a, b;
    cin >> a >> b;
    if (a & 1)
    {
        if (b <= (a / 2) + 1)
        {
            cout << 1 + (b - 1) * 2 << endl;
        }
        else
        {
            cout << 2 + (b - 1 - ((a / 2) + 1)) * 2 << endl;
        }
    }
    else
    {
        if (b <= (a / 2))
        {
            cout << 1 + (b - 1) * 2 << endl;
        }
        else
        {
            cout << 2 + (b - 1 - (a / 2)) * 2 << endl;
        }
    }
    return 0;
}