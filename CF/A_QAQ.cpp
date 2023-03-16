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
    int n = s.size();
    int ans = 0;
    int q = 0;
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'Q')
            ans += a, q++;
        else if (s[i] == 'A')
            a += q;
    }
    cout << ans << endl;

    return 0;
}
