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
    string s;
    cin >> s;
    int n = s.size();
    vector<string> valid = {"dream", "dreamer", "erase", "eraser"};
    reverse(s.begin(), s.end());
    for (int i = 0; i < 4; i++)
    {
        reverse(valid[i].begin(), valid[i].end());
    }
    bool flag = true;
    for (int i = 0; i < n;)
    {
        bool f = false;
        for (int j = 0; j < 4; j++)
        {
            string temp = s.substr(i, valid[j].size());
            if (temp == valid[j])
            {
                f = true;
                i += valid[j].size();
            }
        }
        if (!f)
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}