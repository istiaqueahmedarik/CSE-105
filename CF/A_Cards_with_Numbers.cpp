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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    IOS;

    int n;
    cin >> n;
    vector<pair<int, int>> arr(2 * n);
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i;
    }

    sort(arr.begin(), arr.end());
    int flag = 1;
    vector<pair<int, int>> ans;
    for (int i = 0; i < 2 * n; i += 2)
    {
        if (arr[i].first == arr[i + 1].first)
        {
            ans.push_back({arr[i].second, arr[i + 1].second});
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        for (int i = 0; i < n; i++)
        {
            cout << ans[i].first + 1 << " " << ans[i].second + 1 << endl;
        }
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}