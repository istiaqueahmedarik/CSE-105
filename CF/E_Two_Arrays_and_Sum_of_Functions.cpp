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
    vector<int> arr(n), arr1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i] *= (i + 1) * (n - i);
    }
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    sort(arr.begin(), arr.end());
    sort(arr1.rbegin(), arr1.rend());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        arr[i] %= 998244353;
        ans = (ans + arr[i] * arr1[i]) % 998244353;
    }
    cout << ans << endl;
    return 0;
}