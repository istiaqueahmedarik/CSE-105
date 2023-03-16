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
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    int mx = *max_element(v.begin(), v.end());
    int mn = *min_element(v.begin(), v.end());
    if (mp[mx] == n)
    {
        cout << mx - mn << " " << n * (n - 1) / 2 << endl;
    }
    else
    {
        cout << mx - mn << " " << mp[mx] * mp[mn] << endl;
    }
    return 0;
}