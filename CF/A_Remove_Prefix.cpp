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
        map<int, int> mp;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        int ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (mp[arr[i]] == 0)
            {
                mp[arr[i]]++;
                ans++;
            }
            else
            {
                break;
            }
        }

        cout << n - ans << endl;
    }
    return 0;
}