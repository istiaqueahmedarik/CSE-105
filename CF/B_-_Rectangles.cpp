#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
int checker(int x, int y)
{
}
int32_t main()
{
    IOS;
    double n;
    cin >> n;
    double x = 2 * n;
    int c = 0;
    vector<pair<int, int>> p;
    for (double i = x + 3;; i++)
    {
        double temp = (-2 * i - 2 * i * n + 4 + 4 * n) / (2 * n - i + 2);
        int t = temp;
        if (temp == double(t))
        {
            if (i > t)
                break;
            p.push_back({i, t});
            c++;
        }
    }
    cout << c << endl;
    for (int i = 0; i < p.size(); i++)
    {
        cout << p[i].first << " " << p[i].second << endl;
    }
    return 0;
}
