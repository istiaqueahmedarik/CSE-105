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
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> v(n);
    vector<int> diff;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] - v[i - 1] > x)
        {
            ans++;
            diff.push_back(v[i] - v[i - 1] - 1);
        }
    }
    sort(diff.begin(), diff.end());
    for (int i = 0; i < diff.size(); i++)
    {
        if (k <= 0)
            break;
        if (diff[i] / x <= k)
        {
            k -= diff[i] / x;
            ans--;
        }
        else
            break;
    }
    cout << ans << endl;
    return 0;
}

/*
    n student
    if we can split the group where each element diff is less than x
    teacher can add additional k students in any grp
    how many grp?
*/