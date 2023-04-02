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
    cin.ignore();
    vector<pair<string, string>> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        string t;
        getline(cin, t);
        v.push_back({s, t});
    }

    int q;
    cin >> q;
    cin.ignore();
    while (q--)
    {
        string s;
        getline(cin, s);
        for (auto i : v)
        {
            if (i.first == s)
            {
                cout << i.second << endl;
                break;
            }
        }
    }
    return 0;
}