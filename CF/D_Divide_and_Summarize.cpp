#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
void solve(int a[], int b[], int low, int high, set<int> &possible_sum)
{
    possible_sum.insert(a[high + 1] - a[low]);
    if (b[high] == b[low])
        return;
    int mid = (low + high) / 2;
    int l = low, r = high + 1;
    int temp_sum = (b[high] + b[low]) / 2;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (b[mid] < temp_sum)
            l = mid + 1;
        else
            r = mid;
    }
    solve(a, b, low, r, possible_sum);
    solve(a, b, l + 1, high, possible_sum);
}
int32_t main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n];
        set<int> possible_sum;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int pre[n];
        pre[0] = a[0];
        for (int i = 1; i < n; i++)
            pre[i] = pre[i - 1] + a[i];
        solve(pre, a, 0, n - 1, possible_sum);
        while (q--)
        {
            int x;
            cin >> x;
            for (auto i : possible_sum)
                cout << i << " ";
        }
    }
    return 0;
}