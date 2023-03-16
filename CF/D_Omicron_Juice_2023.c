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
    int i = 1;
    cin >> t;
    while (t--)
    {
        int a, b, c, k;
        cin >> a >> b >> c >> k;
        if ((a + b + c) % 3)
        {
            cout << "Case #" << i << ": "
                 << "Fight" << endl;
        }
        else
        {
            int x = (a + b + c) / 3;
            int c = 0;
            if (abs(a - x) % k == 0)
            {
                c++;
            }
            if (abs(b - x) % k == 0)
            {
                c++;
            }
            if (abs(c - x) % k == 0)
            {
                c++;
            }
            if (c == 3)
            {
                cout << "Case #" << i << ": "
                     << "Peaceful" << endl;
            }
            else
            {
                cout << "Case #" << i << ": "
                     << "Fight" << endl;
            }
        }
        i++;
    }
    return 0;
}