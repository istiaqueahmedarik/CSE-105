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
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    int ans = 0;
    int k = 1;
    int i = 1;
    while (1)
    {
        if (i > n)
        {
            break;
        }
        if (k > arr[i])
            i++;
        else
        {
            ans++;
            k++;
            i++;
        }
    }
    cout << ans << endl;
    return 0;
}