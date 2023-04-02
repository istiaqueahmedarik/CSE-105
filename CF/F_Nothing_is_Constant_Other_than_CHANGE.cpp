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
    vector<int> coins = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
    int cnt = 0;
    for (int i = 0; i < coins.size(); i++)
    {
        while (n >= coins[i])
        {
            n -= coins[i];
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}