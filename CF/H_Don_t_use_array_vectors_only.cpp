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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int ans = 0;
        int temp = 1;
        for (int i = 0; i < n; i++)
        {
            if (temp == arr[i])
            {
                ans++;
                temp = 1;
            }
            else
            {
                temp++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}