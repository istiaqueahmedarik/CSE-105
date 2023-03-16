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
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    cout << a << " " << b << endl;
    return 0;
}