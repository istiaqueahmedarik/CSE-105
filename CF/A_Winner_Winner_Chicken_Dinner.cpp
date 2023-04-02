/*
    n frnds
    seated n circle
    after some time each member leaves the circle
    the place became empty after he leaves
    circle became small group
    m persons left the circle
    how many groups?
*/
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
    int n, m;
    cin >> n >> m;
    if (m == 0)
    {
        cout << 1 << endl;
        return 0;
    }
    else
    {
        cout << min(n - m, m) << endl;
    }
    return 0;
}
