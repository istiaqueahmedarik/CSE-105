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
    int n, k;
    cin >> n >> k;
    multiset<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    int ans = 0;
    for (auto i : s)
    {
        ans += i * k;
        if (k > 1)
            k--;
    }
    cout << ans << endl;
    return 0;
}