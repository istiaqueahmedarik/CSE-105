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
        string s;
        cin >> s;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += s[i] - '0';
        }
        int c = 0;
        while (sum != 0)
        {
            if (s[n - 1] == '0')
            {
                int j = n - 1;
                while (s[j] == '0')
                {
                    j--;
                }
                swap(s[j], s[n - 1]);
                c++;
            }
            else
            {
                c += s[n - 1] - '0';
                sum -= s[n - 1] - '0';
                s[n - 1] = '0';
            }
        }
        cout << c << endl;
    }
    return 0;
}