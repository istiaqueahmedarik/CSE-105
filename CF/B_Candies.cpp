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
        vector<int> steps;
        if (n % 2 == 0)
        {
            cout << -1 << endl;
            continue;
        }
        while (n != 1)
        {
            int x = (n + 1) / 2;
            int y = (n - 1) / 2;
            if (x % 2 != 0)
            {
                steps.push_back(1);
                n = x;
            }
            else if (y % 2 != 0)
            {
                steps.push_back(2);
                n = y;
            }
        }
        cout << steps.size() << endl;
        reverse(steps.begin(), steps.end());
        for (auto x : steps)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
