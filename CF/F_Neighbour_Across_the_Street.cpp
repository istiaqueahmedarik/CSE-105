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
    int cs = 1;
    while (t--)
    {
        float x, y, c;
        cin >> x >> y >> c;
        float low = 0.0, high = max(x, y);
        float mid;
        while (high - low >= 1e-6)
        {
            mid = (low + high) / 2.0;
            if ((1.0 / sqrt(x * x - mid * mid) + 1.0 / sqrt(y * y - mid * mid)) < 1.0 / c)
                low = mid;
            else
                high = mid;
        }
        cout << "Case " << cs++ << ": " << fixed << setprecision(10) << mid << endl;
    }
    return 0;
}