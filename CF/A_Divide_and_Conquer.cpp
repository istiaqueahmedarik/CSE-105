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
        int sum = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum & 1)
        {
            int ans = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                int rm = arr[i] % 2;
                int x = arr[i];
                int c = 0;
                while (rm == x % 2)
                {
                    x /= 2;
                    c++;
                }
                ans = min(ans, c);
            }
            cout << ans << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}