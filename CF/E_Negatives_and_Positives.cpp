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
        vector<int> arr(n);
        int sum = 0;
        int c = 0;
        int mn = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += abs(arr[i]);
            mn = min(mn, abs(arr[i]));
            if (arr[i] < 0)
                c++;
        }
        if (c % 2 == 0)
            cout << sum << endl;
        else
            cout << sum - 2 * mn << endl;
    }
    return 0;
}