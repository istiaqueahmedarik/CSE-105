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
    int x = 3 * n;
    for (int i = 0; i < n; i++)
    {
        cout << x << " ";
        x++;
    }
    return 0;
}