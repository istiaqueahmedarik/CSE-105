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
        int n;
        cin >> n;
        int lowest = 0, highest = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            char c;
            cin >> c;
            if (c == '-')
            {
                highest = min(highest, lowest + x + 24);
            }
            else
            {
                lowest += x + 25;
            }
        }
        cout << highest - lowest + 1 << endl;
    }
    return 0;
}