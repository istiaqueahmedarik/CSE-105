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
    set<int> s;
    while (t--)
    {
        int y, x;
        cin >> y >> x;
        if (y == 1)
        {
            s.insert(x);
        }
        else if (y == 2)
        {
            if (s.find(x) != s.end())
                s.erase(x);
        }
        else
        {
            if (s.find(x) != s.end())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}