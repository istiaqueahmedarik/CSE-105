#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ans = a;
        int al = a, bl = a;
        if (a == 0)
            ans = 1;
        else
        {
            int p = min(b, c);
            ans += 2 * p;
            int x = (min(b, c)) / a * 2;
            if (x == 0)
                x = a + 1;
            if (d >= x)
            {
                ans += x - 1;
            }
            else
            {
                ans += d;
            }
        }
        cout << ans << "\n";
    }
}