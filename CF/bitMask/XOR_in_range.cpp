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
    int l, r;
    cin >> l >> r;
    int x, y;
    l--;
    if (l % 4 == 0)
        x = l;
    else if (l % 4 == 1)
        x = 1;
    else if (l % 4 == 2)
        x = l + 1;
    else
        x = 0;
    if (r % 4 == 0)
        y = r;
    else if (r % 4 == 1)
        y = 1;
    else if (r % 4 == 2)
        y = r + 1;
    else
        y = 0;
    cout << (y ^ x) << endl;
    return 0;
}