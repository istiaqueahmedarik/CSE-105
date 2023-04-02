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
    vector<int> v;
    while (t--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            int p;
            cin >> p;
            v.push_back(p);
        }
        else if (x == 1)
        {
            cout << v.back() << endl;
            v.pop_back();
        }
        else
        {
            cout << *max_element(v.begin(), v.end()) << endl;
        }
    }
    return 0;
}