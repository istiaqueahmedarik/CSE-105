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
    int x, y, z;
    cin >> x >> y >> z;
    if (x > y + z)
        cout << "+";
    else if (y > x + z)
        cout << "-";
    else if (x == y && z == 0)
        cout << "0";
    else
    {
        cout << "?";
    }

    return 0;
}