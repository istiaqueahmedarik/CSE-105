#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int power(int a, int b)
{
    int res = 1;
    while (b)
    {
        if (b & 1)
        {
            res *= a;
        }
        a *= a;
        b >>= 1;
    }
    return res;
}
int32_t main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string t;
        cin >> t;
        int number_of_a = 0;
        for (int i = 0; i < t.size(); i++)
        {
            if (t[i] == 'a')
                number_of_a++;
        }
        if (number_of_a)
        {
            if (t == "a")
                cout << 1 << endl;
            else
                cout << -1 << endl;
        }
        else
        {
            cout << power(2, s.size()) << endl;
        }
    }
    return 0;
}