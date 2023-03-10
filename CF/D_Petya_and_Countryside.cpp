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

    int n;
    cin >> n;
    vector<int> arr, prev(n, 1), next(n, 1);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            prev[i] += prev[i - 1];
        }
    }
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] >= arr[i + 1])
        {
            next[i] += next[i + 1];
        }
    }
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, prev[i] + next[i] - 1);
    }
    cout << ans << endl;

    return 0;
}