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
    int t;
    cin >> t;
    vector<int> left;
    vector<int> right;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        if (l > r)
            swap(l, r);
        left.push_back(l);
        right.push_back(r);
    }
    sort(left.begin(), left.end());
    sort(right.begin(), right.end());
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        int l = upper_bound(left.begin(), left.end(), x) - left.begin();
        int r = lower_bound(right.begin(), right.end(), x) - right.begin();
        cout << abs(l - r) << endl;
    }
    return 0;
}