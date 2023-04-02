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
    int n;
    cin >> n;
    set<string> s;
    string basic;
    if (n % 2 != 0)
    {
        for (int i = 0; i < n - 1; i + 2)
        {
            basic += "HO";
        }
        basic += "H";
    }
    else
    {
        for (int i = 0; i < n; i += 2)
        {
            basic += "HO";
        }
    }
    int O = n / 2;
    s.insert(basic);
    while (O > 0)
    {
        for (int i = 0; i < basic.size(); i++)
        {
            if (basic[i] == 'O')
            {
                basic[i] = 'H';
                break;
            }
        }
        s.insert(basic);
        do
        {
            s.insert(basic);
        } while (next_permutation(basic.begin(), basic.end()));
        O--;
    }
    cout << s.size() << endl;
    return 0;
}