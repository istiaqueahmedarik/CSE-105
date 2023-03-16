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
        int a = 1;
        int b = 0;
        int c = 0;
        int d = 0;
        int s = 1;
        for (int i = 2;; i++)
        {
            s += i;

            if (c == 0)
            {
                if (s >= n)
                {
                    b += n - s + i;
                    break;
                }
                else
                {
                    b += i;
                }
                d++;
            }
            else
            {
                if (s >= n)
                {
                    a += n - s + i;
                    break;
                }
                else
                {
                    a += i;
                }
                d++;
            }
            if (d == 2)
            {
                d = 0;
                c = 1 - c;
            }
            if (s >= n)
                break;
        }
        cout << a << " " << b << endl;
    }
    return 0;
}