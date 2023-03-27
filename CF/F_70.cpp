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
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    int c = 0;
    for (auto i : mp)
    {
        if (i.second > i.first)
        {
            c += i.second - i.first;
        }
        else if (i.second < i.first)
        {
            c += i.second;
        }
    }
    cout << c << endl;
    return 0;
}