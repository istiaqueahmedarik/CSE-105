#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int low(int arr[], int l, int r, int x)
{
    int ans = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            r = mid - 1;
        }
        else if (arr[mid] < x)
            l = mid + 1;
    }
    return ans;
}
int up(int arr[], int l, int r, int x)
{
    int ans = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] <= x)
        {
            l = mid + 1;
        }
        else if (arr[mid] > x)
        {
            ans = mid;
            r = mid - 1;
        }
    }

    return ans;
}
int32_t main()
{
    IOS;
    int t;
    cin >> t;
    int i = 1;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "Case " << i++ << ":" << endl;
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            int lower = low(arr, 0, n, l);
            int upper = up(arr, 0, n, r);
            cout << upper - lower << endl;
        }
    }
    return 0;
}