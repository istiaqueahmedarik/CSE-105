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
        int a, b;
        cin >> a >> b;
        if (a > b)
            cout << "SECOND" << endl;
        else if (a < b)
            cout << "FIRST" << endl;
        else
            cout << "ANY" << endl;
    }
    return 0;
}