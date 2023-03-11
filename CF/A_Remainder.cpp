#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
#define input(v, n)             \
    for (int i = 0; i < n; i++) \
        cin >> v[i];
#define output(v, n)            \
    for (int i = 0; i < n; i++) \
        cout << v[i] << " ";
#define sort(v) sort(v.begin(), v.end())
#define sort_arr(v, n) sort(v, v + n)
#define sort_desc(v) sort(v.begin(), v.end(), greater<int>())
#define sort_desc_arr(v, n) sort(v, v + n, greater<int>())
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int32_t main()
{
    IOS;
    int n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;
    int ans = 0;
    for (int i = n - 1; i >= n - x; i--)
    {
        if (i == n - y - 1)
        {
            if (s[i] == '0')
                ans++;
        }
        else
        {
            if (s[i] == '1')
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}