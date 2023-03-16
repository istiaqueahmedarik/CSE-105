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
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (i == 0 && s[i] == '9')
            continue;
        if (s[i] > '4')
            s[i] = '9' - s[i] + '0';
    }
    cout << s << endl;
    return 0;
}