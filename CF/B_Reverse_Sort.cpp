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
        string s;
        cin >> s;
        string temp = s;
        sort(temp.begin(), temp.end());
        vector<int> ans;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != temp[i])
            {
                ans.emplace_back(i + 1);
            }
        }
        if (ans.size() != 0)
        {
            cout << 1 << endl;
        }
        cout << ans.size() << " ";
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}