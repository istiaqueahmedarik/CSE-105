#include <bits/stdc++.h>
// #define int long long
using namespace std;

int main()
{
    int t, ans;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        ans = 0;
        cin >> a >> b >> c;
        for (int i = 0; i < 10; i++)
        {
            if ((a ^ i) < (b ^ i))
            {
                if ((b ^ i) < (c ^ i))
                {
                    ans = i;
                    break;
                }
            }
        }
        if (ans > 0)
        {
            cout << ans << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}