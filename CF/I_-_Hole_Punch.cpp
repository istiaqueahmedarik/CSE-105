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
    n /= 2;
    vector<int> ans;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                ans.push_back(i);
            else
            {
                ans.push_back(i);
                ans.push_back(n / i);
            }
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
