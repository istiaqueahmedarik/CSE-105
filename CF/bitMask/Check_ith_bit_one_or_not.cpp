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
    int n, i;
    cin >> n >> i;
    if (n & (1 << i))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}