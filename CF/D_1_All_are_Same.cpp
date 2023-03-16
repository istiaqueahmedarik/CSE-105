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
        vector<int> arr, ans;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }
        int mn = *min_element(arr.begin(), arr.end());
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != mn)
            {
                ans.push_back(arr[i] - mn);
            }
        }
        if (ans.size() == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            int ansW = ans[0];
            for (int i = 1; i < ans.size(); i++)
            {
                ansW = __gcd(ansW, ans[i]);
            }
            cout << ansW << endl;
        }
    }
    return 0;
}