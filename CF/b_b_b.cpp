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
        int n;
        cin >> s >> n;
        char check = 'a' - 1;
        int cost = 0;
        while (++check <= 'z')
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == check)
                {
                    cost += s[i] - 'a' + 1;
                    if (cost > n)
                        s.erase(s.begin() + i--);
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}