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
        int n;
        cin >> n;
        vector<int> arr(n), pre(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            pre[i + 1] = pre[i] + arr[i];
        }

        int low = 0, high = n - 1, mid, ans = 0;
        while (low <= high)
        {
            mid = (low + high) / 2;
            int x = (low ? pre[mid] : pre[mid] - pre[low - 1]);
            cout << "? " << mid - low + 1 << " " << endl;
            for (int i = low; i <= mid; i++)
            {
                cout << i + 1 << " ";
            }

            cout << endl;
            cout.flush();
            int y;
            cin >> y;
            if (x != y)
            {
                high = mid - 1;
            }
            else
            {
                ans = mid;
                low = mid + 1;
            }
        }
        cout << "! " << ans << endl;
    }
    return 0;
}