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
    string s;
    cin >> s;
    int n = s.size();
    int pibot = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '^')
        {
            pibot = i;
            break;
        }
    }
    int sum = 0;
    int x = 1;
    for (int i = pibot - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            sum += (s[i] - '0') * x;
        }
        x++;
    }
    int sum1 = 0;
    int x1 = 1;
    for (int i = pibot + 1; i < n; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            sum1 += (s[i] - '0') * x1;
        }
        x1++;
    }
    if (sum == sum1)
    {
        cout << "balance" << endl;
    }
    else if (sum > sum1)
    {
        cout << "left" << endl;
    }
    else
    {
        cout << "right" << endl;
    }

    return 0;
}