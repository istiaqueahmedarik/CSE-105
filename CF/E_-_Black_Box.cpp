#include <bits/stdc++.h>
#define int long long
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
    string s;
    cin >> s;
    int sit = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (sit)
        {
            if (s[i] == '1')
            {
                s[i] = '0';
            }

            else if (s[i] == '0')
                s[i] = '1';
        }
        else
        {
            if (s[i] == '1')
                sit = 1;
        }
    }
    cout << s << "\n";
    return 0;
}
