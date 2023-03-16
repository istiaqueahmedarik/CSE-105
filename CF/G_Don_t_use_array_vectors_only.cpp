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
        vector<int> v(n);
        vector<int> odds;
        vector<int> evens;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] & 1)
            {
                odds.push_back(v[i]);
            }
            else
            {
                evens.push_back(v[i]);
            }
        }
        sort(odds.begin(), odds.end());
        sort(evens.begin(), evens.end());
        for (int i = 0; i < odds.size(); i++)
        {
            cout << odds[i] << " ";
        }
        for (int i = 0; i < evens.size(); i++)
        {
            cout << evens[i] << " ";
        }
        cout << endl;
    }
    return 0;
}