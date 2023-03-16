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
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    cout << count << endl;
    return 0;
}