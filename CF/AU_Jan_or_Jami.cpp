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
        int ans = 0;
        for (auto i : s)
        {
            /* A way to check if the number of 1s in the binary representation of the number is odd or
            even. */
            ans ^= ('Z' - i) % 4;
        }
        if (ans)
        {
            cout << "Jan" << endl;
        }
        else
        {
            cout << "Jami" << endl;
        }
    }
    return 0;
}