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
        string s;
        cin >> s;
        map<string, int> mp;
        int ind = 1;
        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                string temp;
                if (i != j)
                {
                    temp += i + 97;
                    temp += j + 97;
                    mp[temp] = ind++;
                }
            }
        }
        cout << mp[s] << endl;
    }
    return 0;
}