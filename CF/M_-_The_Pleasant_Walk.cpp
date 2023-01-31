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
    int n, k;
    cin >> n >> k;
    vector<int> arr(n + 1);
    int ans = 1, c = 0;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    for (int i = 1; i <= n; i++)
    {
        if (c)
        {
            if (arr[i] != arr[i - 1])
                c++;
            else
                c = 1;
            ans = max(ans, c);
        }
        else
        {
            c++;
        }
    }
    cout << ans << "\n";
    return 0;
}