#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
int32_t main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            int b[n + 1];
            b[0] = arr[0];
            b[n] = arr[n - 1];
            for (int i = 1; i < n; i++)
            {
                b[i] = lcm(arr[i - 1], arr[i]);
            }
            b[n] = arr[n - 1];
            int flag = 1;
            for (int i = 0; i < n - 1; i++)
            {
                if (gcd(b[i], b[i + 1]) != arr[i])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}