#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{

    return a.second < b.second;
}
int32_t main()
{
    IOS;
    int n, t;
    cin >> n >> t;
    vector<pair<int, int>> arr;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        arr.push_back({x, i});
        arr1[i] = x + y * t;
    }
    sort(arr1, arr1 + n);
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        arr[i].first = arr1[i];
    }
    sort(arr.begin(), arr.end(), cmp);

    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
            cout << arr[i].first;
        else
        {
            cout << arr[i].first << " ";
        }
    }
    return 0;
}