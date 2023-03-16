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
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int x = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int p = arr[i] - x;
            if (p < 1)
            {
            }
            else if (p == 1)
                x++;
            else
            {
                ans += (arr[i] - x - 1);
                x++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}