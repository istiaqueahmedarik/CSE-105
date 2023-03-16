#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
bool checker(vector<int> arr, vector<int> days, int mid, int k)
{
    set<int> valid;
    int total = 0;
    for (int i = mid; i >= 0; i--)
    {
        if (arr[i] && !valid.count(arr[i]))
        {
            valid.insert(arr[i]);
            total += days[arr[i] - 1];
        }
        else
            total = max(0LL, --total);
    }
    return valid.size() == k && !total;
}
int32_t main()
{
    IOS;
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> days(k);
    for (int i = 0; i < k; i++)
        cin >> days[i];

    int low = 0, high = n - 1;
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (checker(arr, days, mid, k))
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (checker(arr, days, low, k))
        cout << low + 1 << endl;
    else
        cout << -1 << endl;
    return 0;
}