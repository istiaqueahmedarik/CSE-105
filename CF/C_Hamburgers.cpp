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
    int nb = 0, ns = 0, nc = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B')
            nb++;
        else if (s[i] == 'S')
            ns++;
        else
            nc++;
    }
    int pb, ps, pc;
    cin >> pb >> ps >> pc;
    int rb, rs, rc;
    cin >> rb >> rs >> rc;
    int price;
    cin >> price;
    int l = 0, r = 1e13;
    int ans = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        int b_temp = max(0LL, mid * nb - pb);
        int s_temp = max(0LL, mid * ns - ps);
        int c_temp = max(0LL, mid * nc - pc);
        int cost = b_temp * rb + s_temp * rs + c_temp * rc;
        if (cost <= price)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << endl;
    return 0;
}