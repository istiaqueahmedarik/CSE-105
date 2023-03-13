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
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> price(n);
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    int ans = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        int left = LLONG_MAX, right = LLONG_MAX;
        for (int j = 0; j < i; j++)
        {
            if (v[j] < v[i])
            {
                left = min(left, price[j]);
            }
        }
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] > v[i])
            {
                right = min(right, price[j]);
            }
        }
        if (left != LLONG_MAX && right != LLONG_MAX)
        {
            ans = min(ans, left + right + price[i]);
        }
    }
    if (ans == LLONG_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }

    return 0;
}