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
    string s1 = "codeforces";
    while (t--)
    {
        char s2;
        int flag = 0;
        cin >> s2;
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] == s2)
            {
                cout << "YES" << endl;
                flag = 1;
                break;
            }
        }
        if (!flag)
            cout << "NO" << endl;
    }
    return 0;
}