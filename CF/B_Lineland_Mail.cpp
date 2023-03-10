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
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << arr[i + 1] - arr[i] << " " << arr[n - 1] - arr[i] << endl;
        }
        else if (i == n - 1)
        {
            cout << arr[i] - arr[i - 1] << " " << arr[i] - arr[0] << endl;
        }
        else
        {
            cout << min(arr[i] - arr[i - 1], arr[i + 1] - arr[i]) << " " << max(arr[i] - arr[0], arr[n - 1] - arr[i]) << endl;
        }
    }
    return 0;
}