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
        int p = 1;
        for (int i = 0; i < n; i++)
        {

            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            p = p * arr[i];
        }
        int ans = 1;
        int present = arr[0];
        int flag = 0;
        while (ans < n)
        {
            if (present == (p / present) && p % present == 0)
            {
                cout << ans << endl;
                flag = 1;
                break;
            }
            present *= arr[ans];
            ans++;
        }
        if (!flag)
            cout << -1 << endl;
    }
    return 0;
}