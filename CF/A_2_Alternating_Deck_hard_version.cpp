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
        int w1 = 0, b1 = 0;
        int w2 = 1, b2 = 0;
        int e = 0, f = 0;
        for (int i = 2;; i++)
        {
            s += i;

            if (c == 0)
            {
                if (s >= n)
                {
                    b += n - s + i;
                    int x = (n - s + i) / 2;
                    b1 += (n - s + i) - x;
                    w1 += x;
                    break;
                }
                else
                {
                    b += i;
                    int x = i / 2;
                    b1 += i - x;
                    w1 += x;
                }

                d++;
            }
            else
            {
                if (s >= n)
                {
                    a += n - s + i;
                    int x = (n - s + i) / 2;
                    b2 += x;
                    w2 += (n - s + i) - x;
                    // cout << n - s + i << " " << x << " " << (n - s + i) - x << endl;
                    break;
                }
                else
                {
                    a += i;
                    int x = i / 2;
                    b2 += x;
                    w2 += i - x;
                    // cout << i << " " << x << " " << i - x << endl;
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

        cout << w2 << " " << b2 << " " << w1 << " " << b1 << endl;
    }
    return 0;
}