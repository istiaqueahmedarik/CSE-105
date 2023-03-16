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
        int a[n];
        int sums = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sums += a[i];
        }
        vector<int> sum;
        for (int i = 0; i < n - 1; i++)
        {
            int x = a[i];
            int y = a[i + 1];
            if (x == -1)
                x = 1;
            else
                x = -1;
            if (y == -1)
                y = 1;
            else
                y = -1;
            sum.push_back(sums - (a[i] + a[i + 1]) + x + y);
        }
        int mx = *max_element(sum.begin(), sum.end());
        cout << mx << endl;
    }
    return 0;
}