#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
// implement lower_bound manually
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
int32_t main()
{
    IOS;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (arr[low(arr, 0, n, x)] == x)
        {
            cout << "Yes " << low(arr, 0, n, x) + 1 << endl;
        }
        else
        {
            cout << "No " << low(arr, 0, n, x) + 1 << endl;
        }
    }
    return 0;
}