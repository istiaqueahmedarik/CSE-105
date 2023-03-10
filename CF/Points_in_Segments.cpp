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
    int i = 1;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        cout << "Case " << i << ": " << endl;
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            int x = lower_bound(arr.begin(), arr.end(), l) - arr.begin();
            int y = upper_bound(arr.begin(), arr.end(), r) - arr.begin();
            cout << y - x << endl;
        }
        i++;
    }
    return 0;
}