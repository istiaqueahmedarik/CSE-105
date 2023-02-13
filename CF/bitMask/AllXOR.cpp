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
    if (n % 4 == 0)
        cout << n << endl;
    else if (n % 4 == 1)
        cout << 1 << endl;
    else if (n % 4 == 2)
        cout << n + 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}