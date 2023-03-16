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
        string s;
        cin >> s;
        string ideal = s;
        for (int i = 0; i < n / 2; i++)
        {
            ideal[i] = ideal[n - i - 1];
        }
        vector<int> spell;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != ideal[i])
            {
                c++;
            }
            else
            {
                if (c > 0)
                    spell.push_back(c);
                c = 0;
            }
        }
        if (c > 0)
            spell.push_back(c);
        if (spell.size() < 2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}