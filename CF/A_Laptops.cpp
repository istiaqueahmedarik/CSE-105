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
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b)
         { return a.first < b.first; });
    bool flag = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i].second < v[i - 1].second)
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        cout << "Poor Alex" << endl;
    else
        cout << "Happy Alex" << endl;
    return 0;
}