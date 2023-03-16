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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int l = 0, r = n - 1;
        int c = n;
        while (l <= r)
        {
            if ((s[l] == '0' && s[r] == '1'))
                c -= 2;
            else if ((s[l] == '1' && s[r] == '0'))
                c -= 2;
            else
            {
                break;
            }
            l++;
            r--;
        }
        cout << c << endl;
    }
    return 0;
}