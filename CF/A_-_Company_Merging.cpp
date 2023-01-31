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
    vector<int> all_employee;
    vector<int> each_max;
    vector<int> each_member;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        each_member.push_back(x);
        int m = -1;
        for (int i = 0; i < x; i++)
        {
            int y;
            cin >> y;
            m = max(m, y);
            all_employee.push_back(y);
        }
        each_max.push_back(m);
    }
    int ans = 0;
    int mx = *max_element(all_employee.begin(), all_employee.end());
    for (int i = 0; i < n; i++)
    {
        ans += (mx - each_max[i]) * each_member[i];
    }
    cout << ans << "\n";
    return 0;
}