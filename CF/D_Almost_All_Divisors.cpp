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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int mx = *max_element(arr.begin(), arr.end());
        int mn = *min_element(arr.begin(), arr.end());
        int ans = mx * mn;
        vector<int> divisors;
        for (int i = 2; i * i <= ans; i++)
        {
            if (ans % i == 0)
            {
                divisors.push_back(i);
                if (i * i != ans)
                {
                    divisors.push_back(ans / i);
                }
            }
        }
        sort(divisors.begin(), divisors.end());
        sort(arr.begin(), arr.end());
        int flag = 1;
        if (divisors.size() != n)
        {
            flag = 0;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (divisors[i] != arr[i])
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}