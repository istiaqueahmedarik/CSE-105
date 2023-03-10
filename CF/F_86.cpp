#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int ans(int n)
{
    return n % 10 ? n : ans(n / 10);
}
int32_t main()
{
    IOS;
    int n;
    cin >> n;
    set<int> s;
    while (1)
    {
        if (s.find(n) != s.end())
        {
            cout << s.size() << endl;
            break;
        }
        s.insert(n);
        n = ans(n + 1);
    }
    return 0;
}