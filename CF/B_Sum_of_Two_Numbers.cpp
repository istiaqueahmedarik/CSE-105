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
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a, b;
        bool flag = true;
        while (n != 0)
        {
            int x = n % 10;
            if ((x) % 2 == 0)
            {
                a.push_back(x / 2);
                b.push_back(x / 2);
            }
            else
            {
                if (flag)
                {
                    a.push_back(x / 2);
                    b.push_back(x / 2 + 1);
                }
                else
                {
                    b.push_back(x / 2);
                    a.push_back(x / 2 + 1);
                }
                flag = !flag;
            }
            n /= 10;
        }
        int x = 0, y = 0;
        for (int i = a.size() - 1; i >= 0; i--)
        {
            x = x * 10 + a[i];
        }
        for (int i = b.size() - 1; i >= 0; i--)
        {
            y = y * 10 + b[i];
        }
        cout << x << " " << y << endl;
    }
    return 0;
}