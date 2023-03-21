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
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> prefix(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            prefix[i] = prefix[i - 1] + x;
        }
        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            int sum = prefix[l - 1] + prefix[n] - prefix[r] + k * (r - l + 1);
            if (sum % 2 == 0)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}