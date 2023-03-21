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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int evens = 0, odds = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
                evens += arr[i];
            else
                odds += arr[i];
        }
        if (evens > odds)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}