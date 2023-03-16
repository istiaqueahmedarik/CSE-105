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
        map<string, int> mp;
        vector<string> v(2 * n - 2);
        for (int i = 0; i < 2 * n - 2; i++)
        {
            string s;
            cin >> s;
            v[i] = s;
            mp[s]++;
        }

        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            string s = v[i];
            string s1 = s;
            reverse(s1.begin(), s1.end());
            if (mp[s1] == 0 && (s != s1))
            {
                flag = 0;
                break;
            }
            else if (s == s1 && mp[s1] % 2 != 0)
            {
                flag = 0;
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
    }
    return 0;
}